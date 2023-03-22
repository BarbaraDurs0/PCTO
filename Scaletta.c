#include <stdio.h>

int main()
{
int i;
int f;
printf("Scegli un numero: ");
scanf("%d", &f);
int x[f];
while(i < f)
{
    x[i] = i;
    printf("x:%d = i:%d\n", i, x[i]);
    i = i + 1;  
}
}