#include <stdio.h>

int main()
{
    int x;
    int y;
    int z;
    int k;
    int j;
    printf("Inserire un primo numero: ");
    scanf("%d", &x);
    printf("Inserire un secondo numero: ");
    scanf("%d", &y);
    printf("Inserire un terzo numero: ");
    scanf("%d", &z);
    k = x - y;
    j = y - z;
    if(k == j)
    {
        printf("Sono in prograssione aritmetica\n");
    }
    else
    {
        printf("Non sono in progressione aritmetica\n");
    }
    
}