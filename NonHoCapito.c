#include <stdio.h>

int fattoriale(int n)
{
    int y = 0;
    int z = 1;
    while(y < n)
    {
        y = y + 1;
        z = z * y;
    }
    
    return(z);
}

int main()
{
    int numero;
    printf("Inserisci un numero: ");
    scanf("%d", &numero);
    int f = fattoriale(numero);
    printf("Il fattoriale di %d è %d\n", numero, f);
}