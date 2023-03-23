#include <stdio.h>

void MiZia (int n)
{
if(n < 0)
{
    printf("Negativo\n");
}
else
{
    printf("Positivo\n");
}
}
int main()
{
int x = 1;
while(x !=0)
{
    printf("Scegli un numero: ");
    scanf("%d", &x);
    if(x != 0)
    {
        MiZia (x);
    }
    else
    {
        printf("Errore\n");
    }
}
}