#include <stdlib.h>
#include <string.h>

char **splitstrtotab(char *str, char separator) {
    int row = 0;
    int linelen = 0;
    int columnlen = 0;
    char *buffer = NULL;
    char **newtab = NULL;

    for (int i = 0; i < strlen(str); i ++)
        if (str[i] == separator)
            columnlen ++;
    newtab = malloc(sizeof(char *) * (columnlen + 1));
    for (int i = 0; i < strlen(str); i ++) {
        linelen = 0;

        for (linelen = i; linelen < strlen(str) && str[linelen] != separator; linelen ++);
        newtab[row] = malloc(sizeof(char) * (linelen + 1));
        for (int j = i; j < strlen(str) && str[j] != separator; j ++)
            newtab[row][j] = str[j];
        row ++;
    }
    newtab[row] = NULL;
    return newtab;
}