#include <stdio.h>

int main()
{
    char x;
    char Guglielmo;
    printf("Inserisci il tuo nome con la primalettera maiuscola: ");
    scanf("%c\n", &x);
    if(x == Guglielmo)
    {
        printf("Fai schifo\n");
    }
    else
    {
        printf("Ciao %c\n", x);
    }
}