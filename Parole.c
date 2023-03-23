#include <stdio.h>

int main()
{
    char a[6] = "Ciao,";
    printf("%s", a);
    char b[] = "come";
    printf(" %s", b);
    char *c = "stai?";
    printf(" %s\n", c);
}