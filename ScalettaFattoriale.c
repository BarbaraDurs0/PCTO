#include <stdio.h>

int main()
{
int i = 0;
int f;
int z;
printf("Scegli un numero: ");
scanf("%d", &f);
    int x[f];
    x[0] = 1;
    while(i < f)
    {
        z = 0;
        x[i] = 1;
        while(z < i)
        {
            z = z + 1;
            x[i] = z * x[i];
         }
        printf("%d! = %d\n", i, x[i]);
        i = i + 1;  
    }
}