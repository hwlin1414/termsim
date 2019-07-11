#include <stdlib.h>
#include <string.h>

#include "logger.h"
#include "machine.h"

struct machine_s *machine_init(char *hostname){
    int i;
    struct machine_s *machine;
    machine = (struct machine_s *)malloc(sizeof(struct machine_s));
    machine->ip = 0;
    machine->power = MACHINE_POWEROFF;
    strncpy(machine->hostname, hostname, MACHINE_HOSTNAME_LEN);
    for(i = 0; i < MACHINE_DISKS_MAX; i++){
        machine->disks[i] = NULL;
    }
    machine->console = term_init(80, 24);
    return machine;
}

void machine_poweron(struct machine_s *machine){
    machine->power = MACHINE_POWERON;
    os_boot(machine->os, machine->console);
}
void machine_poweroff(struct machine_s *machine){
    os_shutdown(machine->os, machine->console);
    term_free(machine->console);
    machine->console = term_init(80, 24);
    machine->power = MACHINE_POWEROFF;
}

void machine_free(struct machine_s *machine){
    term_free(machine->console);
    free(machine);
}
