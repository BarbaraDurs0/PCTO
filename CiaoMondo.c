#include <stdio.h>

int main()
{
int i = 0;
int n;
int e = 0;
int f;
int z;
printf("Scegli un numero intero: ");
scanf("%d", &n);
    int x[n];
    while(i < n)
    {
        printf("Scegli il valore per la variabile N°%d\n", i);
        scanf("%d", &f);
        i = i + 1;  
        if(f > e)
        {
            e = f;
            z = i - 1;
        }
    }
    printf("Il numero maggiore è: %d\n", e);
    printf("Il valore corrisponde alla casella %d\n", z);
}