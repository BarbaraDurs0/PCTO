#include <stdio.h>

int main()
{
    int x;
    int y = 0;
    int z = 0;
    printf("inserisci un numero positivo: ");
    scanf("%d", &x);
    while(x > 0)
    {
        printf("inserisci un numero: ");
        scanf("%d", &y);
        z = z + y;
        x = x -1;
    }
    printf("La somma di tutti i numeri che hai inserito è: %d\n", z);
}