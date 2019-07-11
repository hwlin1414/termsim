#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "logger.h"
#include "machine.h"

int main(int argc, char *argv[]){
    struct machine_s *machine;
    machine = machine_init("hello");
    machine->os = os_init("freebsd");
    term_attach(machine->console);
    machine_poweron(machine);

    machine_poweroff(machine);
    machine_free(machine);
	return 0;
}
