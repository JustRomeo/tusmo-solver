#include <string.h>
#include <unistd.h>

#include "file.h"
#include "proto.h"

int tablen(char **av);
char *readfile(char *path);
char **splitstrtotab(char *str, char separator);

char **loadWordsList(char *path) {
    return splitstrtotab(readfile(path), '\n');
}

int usage() {
    write(0, "NAME", 5);
    write(0, "   tusmo-solver - solve a tusmo challenge.", 43);
    write(0, "\n", 2);
    // write(0, "SYNOPSIS", 5);
    // write(0, "    #include <unistd.h>", 5);
    write(0, "\n", 2);
    // write(0, "    ssize_t read(int fd, void *buf, size_t count);", 5);
    write(0, "\n", 2);
    // write(0, "DESCRIPTION", 5);
    // write(0, "    read() attempts to read up to count bytes from file descriptor fd into the buffer starting at buf.", 5);
    write(0, "\n", 2);
    // write(0, "    On  files  that support seeking, the read operation commences at the file offset, and the file offset is incremented by the number of bytes read.", 5);
    // write(0, "    If the file offset is at or past the end of file, no bytes are read, and read() returns zero.", 5);
    write(0, "\n", 2);
    // write(0, "    If count is zero, read() may detect the errors described below.  In the absence of any errors, or if read() does not check for errors,  a  read()", 5);
    // write(0, "    with a count of 0 returns zero and has no other effects.", 5);
    write(0, "\n", 2);
    // write(0, "    According to POSIX.1, if count is greater than SSIZE_MAX, the result is implementation-defined; see NOTES for the upper limit on Linux.", 5);
    write(0, "\n", 2);
    // write(0, "RETURN VALUE", 13);
    return 0;
}

int main(int ac, char **av, char **env) {
    char **frwords = loadWordsList("resources/words");

    for (int i = 0; i < tablen(frwords); i ++)
        write(0, frwords[i], strlen(frwords[i]));
    // readinput();
    return 0;
}