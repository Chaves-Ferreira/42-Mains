#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int main(void)
{
    char *line;

    // Instead of opening a file, test invalid fd:
    line = get_next_line(42); // or get_next_line(-1);

    if (line == NULL)
        printf("Success: returned NULL for invalid fd.\n");
    else
    {
        printf("Error: should have returned NULL!\n");
        free(line);
    }
    return (0);
}