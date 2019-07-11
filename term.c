#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "logger.h"
#include "term.h"

static int term_putc(struct term_s *, char);
static void term_flush(struct term_s *);

struct term_s *term_init(int w, int h){
    int i;
    struct term_s *term;
    term = (struct term_s *)malloc(sizeof(struct term_s));
    term->width = w;
    term->height = h;
    term->cx = 0;
    term->cy = 0;
    for(i = 0; i < TERM_MAX_LINES; i++){
        term->line[i] = NULL;
    }
    term->attach = TERM_DETACHED;
    term->dump = NULL;
    return term;
}

__attribute__((__format__ (__printf__, 2, 0)))
int term_printf(struct term_s *term, char *fmt, ...){
    int count;
    char buf[BUFSIZ];
    va_list ap;
    va_start(ap, fmt);
    vsnprintf(buf, BUFSIZ, fmt, ap);
    va_end(ap);

    count = term_puts(term, buf);
    return count;
}

int term_puts(struct term_s *term, char *str){
    int count;
    char *ptr;

    count = 0;
    ptr = str;
    while(*ptr != '\0'){
        term_putc(term, *ptr);
        ptr++;
        count++;
    }
    term_flush(term);
    return count;
}

static int term_putc(struct term_s *term, char c){
    int i;
    if(term->line[term->cy] == NULL){
        term->line[term->cy] = malloc(TERM_MAX_CHAR_PER_LINE);
        term->line[term->cy][term->cx] = '\0';
    }
    switch(c){
        case '\n':
            term->cx = 0;
            term->cy++;
            if(term->cy == TERM_MAX_LINES){
                term->cy--;
                free(term->line[0]);
                for(i = 0; i < term->cy; i++){
                    term->line[i] = term->line[i + 1];
                }
            }
            term->line[term->cy] = malloc(TERM_MAX_CHAR_PER_LINE);
            term->line[term->cy][term->cx] = '\0';

            if(term->attach == TERM_ATTACHED){
                fputc(c, stdout);
            }
            if(term->dump != NULL){
                fputc(c, term->dump);
            }
            break;
        default:
            term->line[term->cy][term->cx] = c;
            term->line[term->cy][term->cx + 1] = '\0';
            if(term->attach == TERM_ATTACHED){
                fputc(c, stdout);
            }
            if(term->dump != NULL){
                fputc(c, term->dump);
            }
    }
    return 1;
}
void term_flush(struct term_s *term){
    if(term->attach == TERM_ATTACHED){
        fflush(stdout);
    }
    if(term->dump != NULL){
        fflush(term->dump);
    }
}

void term_clear(struct term_s *term){
    int i;
    for(i = 0; i <= term->cy; i++){
        if(term->line[i] != NULL)
            free(term->line[i]);
        term->line[i] = NULL;
    }
    term->cx = 0;
    term->cy = 0;
}

void term_dump(struct term_s *term, char *path){
    term->dump = fopen(path, "w");
}

void term_attach(struct term_s *term){
    int i;
    fprintf(stdout, "[H[J");
    fflush(stdout);
    i = (term->cy >= 24)?(term->cy - 24):(0);
    for(; i < term->cy; i++){
        if(term->line[i] != NULL){
            fprintf(stdout, "%s\n", term->line[i]);
        }
    }
    term->attach = TERM_ATTACHED;
}
void term_detach(struct term_s *term){
    fprintf(stdout, "[H[J");
    term->attach = TERM_DETACHED;
}

void term_free(struct term_s *term){
    term_clear(term);
    free(term);
}
