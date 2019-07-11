#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <stdarg.h>
#include <unistd.h>

#include "logger.h"

__attribute__((__format__ (__printf__, 6, 0)))
int logger(const char *file, const int line, const char *function, const int levelint, const char *level, const char *format, ...){
    time_t now;
    struct tm localtm;
    va_list ap;
    char timebuf[64];
    char buf[BUFSIZ];

    if(levelint > 5) return 0;

    now = time(NULL);
    localtime_r(&now, &localtm);
    strftime(timebuf, 64, "%Y/%m/%d %H:%M:%S", &localtm);

    va_start(ap, format);
    vsnprintf(buf, BUFSIZ, format, ap);
    va_end(ap);

    fprintf(stdout, "%s [%s] %d (%s:%d %s) %s\n", timebuf, level, getpid(), file, line, function, buf);
    fflush(stdout);
    return 0;
}
