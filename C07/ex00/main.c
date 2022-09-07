#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char    *ft_strdup(char *src);

int main(void)
{
    char    *str;
    char    *allo;

    str = "Hello world";
    printf("%s\n", str);
    allo = strdup(str);
    printf("%s\n", allo);
    allo = ft_strdup(str);
    printf("%s\n", allo);
    return (0);
}
