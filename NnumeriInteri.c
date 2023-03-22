#include <stdio.h>

int main()
{
    int x;
    int y;
    int z = 0;
    int k;
    int j;
    printf("inserisci un numero positivo: ");
    scanf("%d", &x);
    k = x;
    while(x > 0)
    {
        printf("inserisci un numero: ");
        scanf("%d", &y);
        z = z + y;
        x = x -1;
    }
    j = z / k;
    printf("La somma di tutti i numeri che hai inserito è: %d\n", z);
    printf("La media è: %d", j);
}