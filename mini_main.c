#include <stdio.h>
#include "get_next_line.h"

int main(void)
{
    char *line;
    int fd = 0;  // 0 = stdin

    while ((line = get_next_line(fd)))
    {
        printf("You typed: %s", line);
        free(line);
    }
    return (0);
}
