#include <stdlib.h>
#include <string.h>

#include "logger.h"
#include "disk.h"

static char disk_uuidchar[] = "abcdefghijklmnopqrstuvwxyz0123456789";

struct disk_s *disk_init(size_t size, int maptype){
    int i, j;
    struct disk_s *disk;
    disk = (struct disk_s *)malloc(sizeof(struct disk_s));
    disk->fstype = DISK_FSTYPE_UNFORMAT;
    disk->maptype = maptype;
    for(i = 0; i < DISK_UUID_LEN - 1; i++){
        j = rand() % (int)strlen(disk_uuidchar);
        disk->uuid[i] = disk_uuidchar[j];
    }
    disk->uuid[i] = '\0';
    disk->size = size;
    disk->mapdata = NULL;
    return disk;
}

void disk_free(struct disk_s *disk){
    free(disk);
}

int disk_map_init(struct disk_s *disk, void *data){
    if(disk->maptype != 0) data = NULL;
    return 0;
}
