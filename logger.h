#ifndef LOGGER_H
#define LOGGER_H

#define debug(...)   logger(__FILE__, __LINE__, __FUNCTION__, 7, "DEBUG",   __VA_ARGS__)
#define info(...)    logger(__FILE__, __LINE__, __FUNCTION__, 5, "INFO",    __VA_ARGS__)
#define warning(...) logger(__FILE__, __LINE__, __FUNCTION__, 4, "WARNING", __VA_ARGS__)
#define error(...)   logger(__FILE__, __LINE__, __FUNCTION__, 3, "ERROR",   __VA_ARGS__)
#define fatal(...)   logger(__FILE__, __LINE__, __FUNCTION__, 2, "FATAL",   __VA_ARGS__)

int logger(const char *, const int, const char *, const int, const char *, const char *, ...);

#endif
