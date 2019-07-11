#ifndef OS_H
#define OS_H
#define OS_NAME_LEN 32
#define OS_PATH_LEN BUFSIZ

#include "term.h"

struct os_s{
    char name[OS_NAME_LEN];
    char dlpath[OS_PATH_LEN];
    void *dl;
};

struct os_hook_s {
    void (*boot)(struct term_s *);
    void (*shutdown)(struct term_s *);
};

struct os_s *os_init(char *);
void os_boot(struct os_s *, struct term_s *);
void os_shutdown(struct os_s *, struct term_s *);
void os_free(struct os_s *);

#endif
