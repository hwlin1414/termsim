#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <dlfcn.h>
#include <errno.h>

#include "logger.h"
#include "os.h"

struct os_s *os_init(char *name){
    struct os_s *os;
    os = (struct os_s *)malloc(sizeof(struct os_s));
    strncpy(os->name, name, OS_NAME_LEN);
    snprintf(os->dlpath, OS_PATH_LEN, "./os_%s.so", name);
    //os->dl = dlopen(os->dlpath, RTLD_LAZY);
    os->dl = dlopen(os->dlpath, RTLD_NOW);
    if(os->dl == NULL){
        error("dlopen: %s", dlerror());
    }
    return os;
}

void os_boot(struct os_s *os, struct term_s *term){
    struct os_hook_s *os_hook;
    os_hook = dlsym(os->dl, "os_hook");
    os_hook->boot(term);
}

void os_shutdown(struct os_s *os, struct term_s *term){
    struct os_hook_s *os_hook;
    os_hook = dlsym(os->dl, "os_hook");
    os_hook->shutdown(term);
}

void os_free(struct os_s *os){
    free(os);
}
