#ifndef MACHINE_H
#define MACHINE_H

#include "os.h"
#include "disk.h"
#include "term.h"

#define MACHINE_HOSTNAME_LEN 64
#define MACHINE_DISKS_MAX 4

#define MACHINE_POWEROFF 0
#define MACHINE_POWERON 1

struct machine_s{
    int ip;
    int power;
    char hostname[MACHINE_HOSTNAME_LEN];
    struct disk_s *disks[MACHINE_DISKS_MAX];
    struct term_s *console;
    struct os_s *os;
};

struct machine_s *machine_init(char *);
void machine_poweron(struct machine_s *);
void machine_poweroff(struct machine_s *);
void machine_free(struct machine_s *);

#endif
