#include <unistd.h>

#include "os.h"
#define WHITE "\033[1;37m"
#define RESET "\033[m"

extern struct os_hook_s os_hook;

void freebsd_boot(struct term_s *);
void freebsd_shutdown(struct term_s *);

struct os_hook_s os_hook = {
    freebsd_boot,
    freebsd_shutdown
};

void freebsd_boot(struct term_s *term){
    term_printf(term, WHITE"Copyright (c) 1992-2018 The FreeBSD Project."RESET"\n"); usleep(50000);
    term_printf(term, WHITE"Copyright (c) 1979, 1980, 1983, 1986, 1988, 1989, 1991, 1992, 1993, 1994"RESET"\n"); usleep(50000);
    term_printf(term, WHITE"The Regents of the University of California. All rights reserved."RESET"\n"); usleep(50000);
    term_printf(term, WHITE"FreeBSD is a registered trademark of The FreeBSD Foundation."RESET"\n"); usleep(50000);
    term_printf(term, WHITE"FreeBSD 11.2-RELEASE #0 r335510: Fri Jun 22 04:32:14 UTC 2018"RESET"\n"); usleep(50000);
    term_printf(term, WHITE"root@releng2.nyi.freebsd.org:/usr/obj/usr/src/sys/GENERIC amd64"RESET"\n"); usleep(50000);
    term_printf(term, WHITE"FreeBSD clang version 6.0.0 (tags/RELEASE_600/final 326565) (based on LLVM 6.0.0)"RESET"\n"); usleep(50000);
    term_printf(term, WHITE"VT(vga): text 80x25"RESET"\n"); usleep(50000);
    term_printf(term, WHITE"CPU: Intel(R) Xeon(R) CPU E5-2620 0 @ 2.00GHz (2000.00-MHz K8-class CPU)"RESET"\n"); usleep(50000);
    term_printf(term, WHITE"Origin=\"GenuineIntel\"  Id=0x106a4  Family=0x6  Model=0x1a  Stepping=4"RESET"\n"); usleep(50000);
    term_printf(term, WHITE"Features=0xf83fbff<FPU,VME,DE,PSE,TSC,MSR,PAE,MCE,CX8,APIC,SEP,MTRR,PGE,MCA,CMOV,PAT,PSE36,MMX,FXSR,SSE,SSE2,SS>"RESET"\n"); usleep(50000);
    term_printf(term, WHITE"Features2=0x81b82201<SSE3,SSSE3,CX16,SSE4.1,SSE4.2,x2APIC,POPCNT,TSCDLT,HV>"RESET"\n"); usleep(50000);
    term_printf(term, WHITE"AMD Features=0x28100800<SYSCALL,NX,RDTSCP,LM>"RESET"\n"); usleep(50000);
    term_printf(term, WHITE"AMD Features2=0x1<LAHF>"RESET"\n"); usleep(50000);
    term_printf(term, WHITE"Structured Extended Features=0x2<TSCADJ>"RESET"\n"); usleep(50000);
    term_printf(term, WHITE"Structured Extended Features3=0x2c000000<IBPB,STIBP,ARCH_CAP>"RESET"\n"); usleep(50000);
    term_printf(term, WHITE"IA32_ARCH_CAPS=0x4"RESET"\n"); usleep(50000);
    term_printf(term, WHITE"TSC: P-state invariant"RESET"\n"); usleep(50000);
    term_printf(term, WHITE"Hypervisor: Origin = \"VMwareVMware\""RESET"\n"); usleep(50000);
    term_printf(term, WHITE"real memory  = 8589934592 (8192 MB)"RESET"\n"); usleep(50000);
    term_printf(term, WHITE"avail memory = 8251731968 (7869 MB)"RESET"\n"); usleep(50000);
    term_printf(term, WHITE"Event timer \"LAPIC\" quality 600"RESET"\n"); usleep(50000);
    term_printf(term, WHITE"ACPI APIC Table: <PTLTD      APIC  >"RESET"\n"); usleep(50000);
    term_printf(term, WHITE"FreeBSD/SMP: Multiprocessor System Detected: 4 CPUs"RESET"\n"); usleep(50000);
    term_printf(term, WHITE"FreeBSD/SMP: 4 package(s)"RESET"\n"); usleep(50000);
    term_printf(term, WHITE"MADT: Forcing active-low polarity and level trigger for SCI"RESET"\n"); usleep(50000);
    term_printf(term, WHITE"ioapic0 <Version 2.0> irqs 0-23 on motherboard"RESET"\n"); usleep(50000);
    term_printf(term, WHITE"SMP: AP CPU #2 Launched!"RESET"\n"); usleep(50000);
    term_printf(term, WHITE"SMP: AP CPU #3 Launched!"RESET"\n"); usleep(50000);
    term_printf(term, WHITE"SMP: AP CPU #1 Launched!"RESET"\n"); usleep(50000);
    term_printf(term, WHITE"random: entropy device external interface"RESET"\n"); usleep(50000);
    term_printf(term, WHITE"kbd1 at kbdmux0"RESET"\n"); usleep(50000);
    term_printf(term, WHITE"netmap: loaded module"RESET"\n"); usleep(50000);
    term_printf(term, WHITE"module_register_init: MOD_LOAD (vesa, 0xffffffff80ff4550, 0) error 19"RESET"\n"); usleep(50000);
    term_printf(term, WHITE"nexus0"RESET"\n"); usleep(50000);
    term_printf(term, WHITE"vtvga0: <VT VGA driver> on motherboard"RESET"\n"); usleep(50000);
    term_printf(term, WHITE"cryptosoft0: <software crypto> on motherboard"RESET"\n"); usleep(50000);
    term_printf(term, WHITE"acpi0: <INTEL 440BX> on motherboard"RESET"\n"); usleep(50000);
    term_printf(term, WHITE"acpi0: Power Button (fixed)"RESET"\n"); usleep(50000);
    term_printf(term, WHITE"hpet0: <High Precision Event Timer> iomem 0xfed00000-0xfed003ff on acpi0"RESET"\n"); usleep(50000);
    term_printf(term, WHITE"Timecounter \"HPET\" frequency 14318180 Hz quality 950"RESET"\n"); usleep(50000);
    term_printf(term, WHITE"cpu0: <ACPI CPU> numa-domain 0 on acpi0"RESET"\n"); usleep(50000);
    term_printf(term, WHITE"cpu1: <ACPI CPU> numa-domain 0 on acpi0"RESET"\n"); usleep(50000);
    term_printf(term, WHITE"cpu2: <ACPI CPU> numa-domain 0 on acpi0"RESET"\n"); usleep(50000);
    term_printf(term, WHITE"cpu3: <ACPI CPU> numa-domain 0 on acpi0"RESET"\n"); usleep(50000);
    term_printf(term, WHITE"attimer0: <AT timer> port 0x40-0x43 irq 0 on acpi0"RESET"\n"); usleep(50000);
    term_printf(term, WHITE"Timecounter \"i8254\" frequency 1193182 Hz quality 0"RESET"\n"); usleep(50000);
    term_printf(term, WHITE"Event timer \"i8254\" frequency 1193182 Hz quality 100"RESET"\n"); usleep(50000);
    term_printf(term, WHITE"atrtc0: <AT realtime clock> port 0x70-0x71 irq 8 on acpi0"RESET"\n"); usleep(50000);
    term_printf(term, WHITE"atrtc0: registered as a time-of-day clock, resolution 1.000000s"RESET"\n"); usleep(50000);
    term_printf(term, WHITE"Event timer \"RTC\" frequency 32768 Hz quality 0"RESET"\n"); usleep(50000);
    term_printf(term, WHITE"Timecounter \"ACPI-fast\" frequency 3579545 Hz quality 900"RESET"\n"); usleep(50000);
    term_printf(term, WHITE"acpi_timer0: <24-bit timer at 3.579545MHz> port 0x1008-0x100b on acpi0"RESET"\n"); usleep(50000);
    term_printf(term, WHITE"pcib0: <ACPI Host-PCI bridge> port 0xcf8-0xcff on acpi0"RESET"\n"); usleep(50000);
    term_printf(term, WHITE"pci0: <ACPI PCI bus> on pcib0"RESET"\n"); usleep(50000);
    term_printf(term, WHITE"pcib1: <ACPI PCI-PCI bridge> at device 1.0 on pci0"RESET"\n"); usleep(50000);
    term_printf(term, WHITE"pci1: <ACPI PCI bus> on pcib1"RESET"\n"); usleep(50000);
    term_printf(term, WHITE"isab0: <PCI-ISA bridge> at device 7.0 on pci0"RESET"\n"); usleep(50000);
    term_printf(term, WHITE"isa0: <ISA bus> on isab0"RESET"\n"); usleep(50000);
    term_printf(term, WHITE"atapci0: <Intel PIIX4 UDMA33 controller> port 0x1f0-0x1f7,0x3f6,0x170-0x177,0x376,0x1060-0x106f at device 7.1 on pci0"RESET"\n"); usleep(50000);
    term_printf(term, WHITE"ata0: <ATA channel> at channel 0 on atapci0"RESET"\n"); usleep(50000);
    term_printf(term, WHITE"ata1: <ATA channel> at channel 1 on atapci0"RESET"\n"); usleep(50000);
    term_printf(term, WHITE"pci0: <bridge> at device 7.3 (no driver attached)"RESET"\n"); usleep(50000);
    term_printf(term, WHITE"vgapci0: <VGA-compatible display> port 0x1070-0x107f mem 0xe8000000-0xefffffff,0xfe000000-0xfe7fffff irq 16 at device 15.0 on pci0"RESET"\n"); usleep(50000);
    term_printf(term, WHITE"vgapci0: Boot video device"RESET"\n"); usleep(50000);
    term_printf(term, WHITE"pcib2: <ACPI PCI-PCI bridge> at device 17.0 on pci0"RESET"\n"); usleep(50000);
    term_printf(term, WHITE"pci2: <ACPI PCI bus> on pcib2"RESET"\n"); usleep(50000);
    term_printf(term, WHITE"pcib3: <ACPI PCI-PCI bridge> at device 21.0 on pci0"RESET"\n"); usleep(50000);
    term_printf(term, WHITE"pcib3: [GIANT-LOCKED]"RESET"\n"); usleep(50000);
    term_printf(term, WHITE"pci3: <ACPI PCI bus> on pcib3"RESET"\n"); usleep(50000);
    term_printf(term, WHITE"mpt0: <LSILogic SAS/SATA Adapter> port 0x4000-0x40ff mem 0xfd5ec000-0xfd5effff,0xfd5f0000-0xfd5fffff irq 18 at device 0.0 on pci3"RESET"\n"); usleep(50000);
    term_printf(term, WHITE"mpt0: MPI Version=1.5.0.0"RESET"\n"); usleep(50000);
    term_printf(term, WHITE"pcib4: <ACPI PCI-PCI bridge> at device 21.1 on pci0"RESET"\n"); usleep(50000);
    term_printf(term, WHITE"pcib4: [GIANT-LOCKED]"RESET"\n"); usleep(50000);
    term_printf(term, WHITE"pcib5: <ACPI PCI-PCI bridge> at device 21.2 on pci0"RESET"\n"); usleep(50000);
    term_printf(term, WHITE"pcib5: [GIANT-LOCKED]"RESET"\n"); usleep(50000);
    term_printf(term, WHITE"pcib6: <ACPI PCI-PCI bridge> at device 21.3 on pci0"RESET"\n"); usleep(50000);
    term_printf(term, WHITE"pcib6: [GIANT-LOCKED]"RESET"\n"); usleep(50000);
    term_printf(term, WHITE"pcib7: <ACPI PCI-PCI bridge> at device 21.4 on pci0"RESET"\n"); usleep(50000);
    term_printf(term, WHITE"pcib7: [GIANT-LOCKED]"RESET"\n"); usleep(50000);
    term_printf(term, WHITE"pcib8: <ACPI PCI-PCI bridge> at device 21.5 on pci0"RESET"\n"); usleep(50000);
    term_printf(term, WHITE"pcib8: [GIANT-LOCKED]"RESET"\n"); usleep(50000);
    term_printf(term, WHITE"pcib9: <ACPI PCI-PCI bridge> at device 21.6 on pci0"RESET"\n"); usleep(50000);
    term_printf(term, WHITE"pcib9: [GIANT-LOCKED]"RESET"\n"); usleep(50000);
    term_printf(term, WHITE"pcib10: <ACPI PCI-PCI bridge> at device 21.7 on pci0"RESET"\n"); usleep(50000);
    term_printf(term, WHITE"pcib10: [GIANT-LOCKED]"RESET"\n"); usleep(50000);
    term_printf(term, WHITE"pcib11: <ACPI PCI-PCI bridge> at device 22.0 on pci0"RESET"\n"); usleep(50000);
    term_printf(term, WHITE"pcib11: [GIANT-LOCKED]"RESET"\n"); usleep(50000);
    term_printf(term, WHITE"pci4: <ACPI PCI bus> on pcib11"RESET"\n"); usleep(50000);
    term_printf(term, WHITE"vmx0: <VMware VMXNET3 Ethernet Adapter> port 0x5000-0x500f mem 0xfd4fc000-0xfd4fcfff,0xfd4fd000-0xfd4fdfff,0xfd4fe000-0xfd4fffff irq 19 at device 0.0 on pci4"RESET"\n"); usleep(50000);
    term_printf(term, WHITE"vmx0: Ethernet address: 00:50:56:93:76:08"RESET"\n"); usleep(50000);
    term_printf(term, WHITE"pcib12: <ACPI PCI-PCI bridge> at device 22.1 on pci0"RESET"\n"); usleep(50000);
    term_printf(term, WHITE"pcib12: [GIANT-LOCKED]"RESET"\n"); usleep(50000);
    term_printf(term, WHITE"pcib13: <ACPI PCI-PCI bridge> at device 22.2 on pci0"RESET"\n"); usleep(50000);
    term_printf(term, WHITE"pcib13: [GIANT-LOCKED]"RESET"\n"); usleep(50000);
    term_printf(term, WHITE"pcib14: <ACPI PCI-PCI bridge> at device 22.3 on pci0"RESET"\n"); usleep(50000);
    term_printf(term, WHITE"pcib14: [GIANT-LOCKED]"RESET"\n"); usleep(50000);
    term_printf(term, WHITE"pcib15: <ACPI PCI-PCI bridge> at device 22.4 on pci0"RESET"\n"); usleep(50000);
    term_printf(term, WHITE"pcib15: [GIANT-LOCKED]"RESET"\n"); usleep(50000);
    term_printf(term, WHITE"pcib16: <ACPI PCI-PCI bridge> at device 22.5 on pci0"RESET"\n"); usleep(50000);
    term_printf(term, WHITE"pcib16: [GIANT-LOCKED]"RESET"\n"); usleep(50000);
    term_printf(term, WHITE"acpi_acad0: <AC Adapter> on acpi0"RESET"\n"); usleep(50000);
    term_printf(term, WHITE"atkbdc0: <Keyboard controller (i8042)> port 0x60,0x64 irq 1 on acpi0"RESET"\n"); usleep(50000);
    term_printf(term, WHITE"atkbd0: <AT Keyboard> irq 1 on atkbdc0"RESET"\n"); usleep(50000);
    term_printf(term, WHITE"kbd0 at atkbd0"RESET"\n"); usleep(50000);
    term_printf(term, WHITE"atkbd0: [GIANT-LOCKED]"RESET"\n"); usleep(50000);
    term_printf(term, WHITE"psm0: <PS/2 Mouse> irq 12 on atkbdc0"RESET"\n"); usleep(50000);
    term_printf(term, WHITE"psm0: [GIANT-LOCKED]"RESET"\n"); usleep(50000);
    term_printf(term, WHITE"psm0: model IntelliMouse, device ID 3"RESET"\n"); usleep(50000);
    term_printf(term, WHITE"acpi_syscontainer0: <System Container> on acpi0"RESET"\n"); usleep(50000);
    term_printf(term, WHITE"orm0: <ISA Option ROMs> at iomem 0xc0000-0xc7fff,0xc8000-0xc9fff,0xca000-0xcafff,0xdc000-0xdffff,0xe0000-0xe7fff on isa0"RESET"\n"); usleep(50000);
    term_printf(term, WHITE"vga0: <Generic ISA VGA> at port 0x3c0-0x3df iomem 0xa0000-0xbffff on isa0"RESET"\n"); usleep(50000);
    term_printf(term, WHITE"ppc0: cannot reserve I/O port range"RESET"\n"); usleep(50000);
    term_printf(term, WHITE"ZFS filesystem version: 5"RESET"\n"); usleep(50000);
    term_printf(term, WHITE"ZFS storage pool version: features support (5000)"RESET"\n"); usleep(50000);
    term_printf(term, WHITE"Timecounters tick every 10.000 msec"RESET"\n"); usleep(50000);
    term_printf(term, WHITE"usb_needs_explore_all: no devclass"RESET"\n"); usleep(50000);
    term_printf(term, WHITE"cd0 at ata0 bus 0 scbus0 target 0 lun 0"RESET"\n"); usleep(50000);
    term_printf(term, WHITE"cd0: <NECVMWar VMware IDE CDR00 1.00> Removable CD-ROM SCSI device"RESET"\n");
    term_printf(term, WHITE"cd0: Serial Number 00000000000000000001"RESET"\n");
    term_printf(term, WHITE"cd0: 33.300MB/s transfers (UDMA2, ATAPI 12bytes, PIO 65534bytes)"RESET"\n");
    term_printf(term, WHITE"cd0: 669MB (342562 2048 byte sectors)"RESET"\n"); usleep(50000);
    term_printf(term, WHITE"da0 at mpt0 bus 0 scbus2 target 0 lun 0"RESET"\n"); usleep(50000);
    term_printf(term, WHITE"da0: <VMware Virtual disk 2.0> Fixed Direct Access SPC-4 SCSI device"RESET"\n");
    term_printf(term, WHITE"da0: 300.000MB/s transfers"RESET"\n");
    term_printf(term, WHITE"da0: Command Queueing enabled"RESET"\n");
    term_printf(term, WHITE"da0: 32768MB (67108864 512 byte sectors)"RESET"\n");
    term_printf(term, WHITE"da0: quirks=0x140<RETRY_BUSY,STRICT_UNMAP>"RESET"\n"); usleep(50000);
    term_printf(term, WHITE"Trying to mount root from zfs:zroot/ROOT/default []..."RESET"\n"); usleep(50000);
    term_printf(term, WHITE"random: unblocking device."RESET"\n"); usleep(50000);
    term_printf(term, WHITE"vmx0: link state changed to UP"RESET"\n"); usleep(50000);

    term_printf(term, "Setting hostuuid: 313d1eab-be07-4b34-9df8-836eefdc698b.\n"); usleep(50000);
    term_printf(term, "Setting hostid: 0xc3cbf5ff.\n"); usleep(50000);
    term_printf(term, "Starting file system checks:\n"); usleep(50000);
    term_printf(term, "Mounting local filesystems:.\n"); usleep(50000);
    term_printf(term, "ELF ldconfig path: /lib /usr/lib /usr/lib/compat /usr/local/lib /usr/local/lib/gcc7 /usr/local/lib/mysql /usr/local/lib/perl5/5.26/mach/CORE\n"); usleep(50000);
    term_printf(term, "32-bit compatibility ldconfig path: /usr/lib32\n"); usleep(50000);
    term_printf(term, "Setting hostname: bsd.\n"); usleep(50000);
    term_printf(term, "Setting up harvesting: [UMA],[FS_ATIME],SWI,INTERRUPT,NET_NG,NET_ETHER,NET_TUN,MOUSE,KEYBOARD,ATTACH,CACHED\n"); usleep(50000);
    term_printf(term, "Feeding entropy: .\n"); usleep(50000);
    term_printf(term, "Starting Network: lo0 em0 em1.\n"); usleep(50000);
    term_printf(term, "lo0: flags=8049<UP,LOOPBACK,RUNNING,MULTICAST> metric 0 mtu 16384\n");
    term_printf(term, "options=600003<RXCSUM,TXCSUM,RXCSUM_IPV6,TXCSUM_IPV6>\n");
    term_printf(term, "inet6 ::1 prefixlen 128\n");
    term_printf(term, "inet6 fe80::1%lo0 prefixlen 64 scopeid 0x3\n");
    term_printf(term, "inet 127.0.0.1 netmask 0xff000000\n");
    term_printf(term, "nd6 options=21<PERFORMNUD,AUTO_LINKLOCAL>\n");
    term_printf(term, "groups: lo\n"); usleep(100000);
    term_printf(term, "Starting devd.\n"); usleep(50000);
    term_printf(term, "add host ::1: gateway lo0 fib 0: route already in table\n");
    term_printf(term, "add net fe80::: gateway ::1\n");
    term_printf(term, "add net ff02::: gateway ::1\n");
    term_printf(term, "add net ::ffff:0.0.0.0: gateway ::1\n");
    term_printf(term, "add net ::0.0.0.0: gateway ::1\n"); usleep(50000);
    term_printf(term, "Creating and/or trimming log files.\n"); usleep(50000);
    term_printf(term, "Starting syslogd.\n"); usleep(50000);
    term_printf(term, "No core dumps found.\n"); usleep(50000);
    term_printf(term, "Clearing /tmp (X related).\n"); usleep(50000);
    term_printf(term, "Updating motd:.\n"); usleep(50000);
    term_printf(term, "Mounting late filesystems:.\n"); usleep(50000);
    term_printf(term, "Configuring vt: blanktime.\n"); usleep(50000);
    term_printf(term, "Performing sanity check on sshd configuration.\n"); usleep(200000);
    term_printf(term, "Starting sshd.\n"); usleep(50000);
    term_printf(term, "Starting sendmail_submit.\n"); usleep(50000);
    term_printf(term, "Starting sendmail_msp_queue.\n"); usleep(50000);
    term_printf(term, "Starting cron.\n"); usleep(50000);
    term_printf(term, "Starting background file system checks in 60 seconds.\n"); usleep(50000);
    term_printf(term, "\n"); usleep(50000);
    term_printf(term, "Fri Jul 12 10:43:23 CST 2019\n");
    term_printf(term, "\n");
    sleep(1);
    term_printf(term, "FreeBSD 11.2-RELEASE-p9 (GENERIC) #0: Tue Feb  5 15:30:36 UTC 2019\n");
    term_printf(term, "\n");
    term_printf(term, "Welcome to FreeBSD!\n");
    term_printf(term, "\n");
    term_printf(term, "Release Notes, Errata: https://www.FreeBSD.org/releases/\n");
    term_printf(term, "Security Advisories:   https://www.FreeBSD.org/security/\n");
    term_printf(term, "FreeBSD Handbook:      https://www.FreeBSD.org/handbook/\n");
    term_printf(term, "FreeBSD FAQ:           https://www.FreeBSD.org/faq/\n");
    term_printf(term, "Questions List: https://lists.FreeBSD.org/mailman/listinfo/freebsd-questions/\n");
    term_printf(term, "FreeBSD Forums:        https://forums.FreeBSD.org/\n");
    term_printf(term, "\n");
    term_printf(term, "\n");
    sleep(3);
}

void freebsd_shutdown(struct term_s *term){
    term_printf(term, WHITE"Waiting (max 60 seconds) for system process `vnlru' to stop... "RESET);
    sleep(2);
    term_printf(term, WHITE"done"RESET"\n");
    term_printf(term, WHITE"Waiting (max 60 seconds) for system process `bufdaemon' to stop... "RESET);
    sleep(1);
    term_printf(term, WHITE"done"RESET"\n");
    term_printf(term, WHITE"Waiting (max 60 seconds) for system process `syncer' to stop..."RESET"\n");
    sleep(1);
    term_printf(term, WHITE"Syncing disks, vnodes remaining... "RESET);
    sleep(1);
    term_printf(term, WHITE"0 "RESET);
    sleep(1);
    term_printf(term, WHITE"0 "RESET);
    sleep(1);
    term_printf(term, WHITE"0 0 0 done"RESET"\n");
    term_printf(term, WHITE"All buffers synced."RESET"\n");
    term_printf(term, WHITE"Uptime: 3m58s"RESET"\n");
    sleep(2);
}

