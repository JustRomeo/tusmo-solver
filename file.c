#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>

char *readfile(char *path) {
    long size;
    struct stat st;
    int bytesRead = 0;
    char *buffer = NULL;
    int fd = open(path, O_RDWR);

    if (fd == -1) {
        write(1, "Error Opening File !\n", 22);
        return NULL;
    } else {
        write(0, "File ", 6);
        write(0, path, strlen(path));
        write(0, " opened sucessfully !\n", 23);
    }

    if (stat(path, &st) == 0)
        size = st.st_size;
    buffer = malloc(sizeof(char) * (size + 1));
    bytesRead = read(fd, buffer, size);
    return buffer;
}