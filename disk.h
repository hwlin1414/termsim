#ifndef DISK_H
#define DISK_H

#define DISK_UUID_LEN 32

#define DISK_FSTYPE_UNFORMAT 0
#define DISK_FSTYPE_NTFS 1
#define DISK_FSTYPE_FAT32 2
#define DISK_FSTYPE_UFS 3
#define DISK_FSTYPE_ZFS 4
#define DISK_FSTYPE_EXT4 5

#define DISK_MAPTYPE_NONE 0
#define DISK_MAPTYPE_MEM 1
#define DISK_MAPTYPE_DIR 2

struct disk_s {
    int fstype;
    int maptype;
    size_t size;
    char uuid[DISK_UUID_LEN];
    void *mapdata;
};

struct disk_s *disk_init(size_t, int);
void disk_free(struct disk_s *);
int disk_map_init(struct disk_s *, void *);

#endif
