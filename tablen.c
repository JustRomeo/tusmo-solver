int tablen(char **av) {
    int len = 0;

    for (; av[len]; len ++);
    return len;
}