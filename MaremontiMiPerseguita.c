#include <stdio.h>

int main()
{
    float x;
    float y;
    float z;

    printf("scrivere il primo lato: ");
    scanf("%f", &x);
    printf("scrivere il secondo lato: ");
    scanf("%f", &y);
    printf("scrivere il terzo lato: ");
    scanf("%f", &z);
    if(x + y > z && y + z > x && x + z > y)
    {
        printf("è un triangolo\n");
        if(x == y && y == z && z == x)
        {
            printf("è equilatero\n");
        }
        else
        {
            if(x == y || y == z || z == x)
            {
                printf("è isoscele\n");
            }
            else
            {
                printf("è scaleno\n");
            }
            
         }
    }
    else
    {
        printf("non è un triangolo\n");
    }
}