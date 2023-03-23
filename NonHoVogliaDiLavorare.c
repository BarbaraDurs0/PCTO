#include <stdio.h>
int QuiQuoQua (int x, int y, int z)
{
    int k = 0;
if(z == 1)
{
    k = x + y;
}
if(z == 2)
{
    k = x - y;
}
if(z == 3)
{
    k = x * y;
}
if(z == 4)
{
    k = x / y;
}
return (k);
}

int main()
{
int x;
int y;
int z;
int k;
int j;
printf("Scrivi il primo numero: ");
scanf("%d", &x);
printf("Scrivi il secondo numero: ");
scanf("%d", &y);
printf("quale delle quattro operazioni vuoi eseguire?\n");
printf("1: Addizione.\n");
printf("2: Sottrazione.\n");
printf("3: Moltiplicazione.\n");
printf("4: Divisione.");
scanf("%d", &z);
k = QuiQuoQua (x, y, z);
if(k == 0)
{
    printf("Errore\n");
}
else
{
    printf("Il risultato è %d\n", k);
    if(z == 4)
    {
        j = x % y;
        printf("Con il resto di %d\n", j);
    }
}
}