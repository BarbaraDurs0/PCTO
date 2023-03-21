#include <stdio.h>

int main()
{
    char x;
    printf("seleziona un carattere:");
    scanf(" %c", &x);

    if(x > -1 && x < 48)
    {
        printf("Carattere speciale\n");
    }
    if(x > 47 && x < 58)
    {
        printf("Numero\n");
    }
    if(x > 57 && x < 65)
    {
        printf("Carattere speciale\n");
    }
    if(x > 64 && x < 91)
    {
        printf("Lettera maiuscola\n");
    }
    if(x > 90 && x < 97)
    {
        printf("Carattere speciale\n");
    }
    if(x > 96 && x < 123)
    {
        printf("Lettera minuscola\n");
    }
    if(x > 122 && x < 128)
    {
        printf("Carattere speciale\n");
    }
}