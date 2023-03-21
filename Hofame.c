#include <stdio.h>

int main()
{
    int x;
    int y = 0;
    int z = 0;
    printf("scegli un numero: ");
    scanf("%d", &x);
    while(y <= x)
    {
        y = y + 1;
        if(x % y == 0)
        {
            z = z + 1;
        }
    }
    if(z == 2)
    {printf("%d è un numero primo\n", x);}
    else
    {printf("%d non è un numero primo\n", x);}
}