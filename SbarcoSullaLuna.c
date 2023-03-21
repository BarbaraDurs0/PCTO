#include <stdio.h>

int main()
{
    int x;
    int y;
    int z;

    printf("scrivere l'anno di nascita: ");
    scanf("%d", &x);
    if(x < 1969)
    {
        z = 1969 - x;
        printf("sei nato %d anni prima della sbarco sulla Luna\n", z);
    }
    else
    {
        if(x > 1969)
        {
            y = x - 1969;
            printf("sei nato %d anni dopo lo sbarco sulla Luna\n", y);
        }
        else
        {
            printf("sei nato lo stesso anno dello sbarco sulla Luna\n");
        }
    }
}