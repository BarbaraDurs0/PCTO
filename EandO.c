#include <stdio.h>

int main()
{
    int x;
    printf("scrivere l'anno: ");
    scanf("%d", &x);
    if((x % 4 == 0 && x % 100 != 0) || x % 400 == 0)
    {
        printf("%d è bisestile\n", x);
    }
    else
    {
        printf("%d non è bisesstile\n", x);
    }
}