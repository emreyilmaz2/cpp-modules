#include <stdlib.h>

int main(int ac, char **av)
{
    char *s;
    if (ac == 5)
    {
        s = malloc(100);
    }
    free(s);
}