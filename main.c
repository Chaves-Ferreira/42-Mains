#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void)
{
    int fd = open("test2.txt", O_RDONLY); // or "/etc" to test a read error uppon opening directory
    char *line;

    if (fd == -1)
    {
        printf("Open failed (fd == -1). Returning 1.\n");
        return (1);
    }

    line = get_next_line(fd);
    if (!line)
    {
        printf("get_next_line returned NULL (probably read() error).\n");
        close(fd);
        return (1);
    }

    while (line)
    {
        printf("%s", line);
        free(line);
        line = get_next_line(fd);
    }

    close(fd);
    return (0);
}
