#ifndef TERM_H
#define TERM_H

#include <stdio.h>

#define TERM_MAX_LINES 128
#define TERM_MAX_CHAR_PER_LINE BUFSIZ
#define TERM_DETACHED 0
#define TERM_ATTACHED 1

struct term_s {
    int width;
    int height;
    int cx;
    int cy;
    char *line[TERM_MAX_LINES];
    FILE *dump;
    int attach;
    int alignment;
};

struct term_s *term_init(int, int);
int term_printf(struct term_s *, char *, ...);
int term_puts(struct term_s *, char *);
void term_clear(struct term_s *);
void term_dump(struct term_s *, char *);
void term_attach(struct term_s *);
void term_detach(struct term_s *);
void term_free(struct term_s *);

#endif
