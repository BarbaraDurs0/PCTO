#include <stdio.h>

void stampa(char *L)
{
    int i = 0;

    while(L[i] != 0)
    {
        printf("%c\n", L[i]);
        i = i + 1;
    }
}
int main()
{
    char *L = "Napoli";

    stampa (L);
}