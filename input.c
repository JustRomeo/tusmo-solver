#include <stdlib.h>
#include <unistd.h>

#include "params.h"

char *readinput() {
    char *buffer = malloc(sizeof(char) * (MAX_ALLOWED_INPUT_LENGTH + 1));

    if (!buffer)
        return NULL;
    read(0, buffer, MAX_ALLOWED_INPUT_LENGTH);
    write(0, buffer, MAX_ALLOWED_INPUT_LENGTH);
    return buffer;
}