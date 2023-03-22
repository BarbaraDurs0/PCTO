#include <stdio.h>

int MiZia (int n)
{
if(n < 0)
{
n = n * (-1);
}
return (n);
}
int main()
{
int x;
printf("Scrivi un numero: ");
scanf("%d", &x);
int p = MiZia (x);
printf("Il valore assoluto del tuo numero è: %d\n", p);
}