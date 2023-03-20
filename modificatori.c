#include <stdio.h>

int main()
{
    int x;
   
    printf("inserisci un numero: ");
    scanf("%d", &x);
    x = x + 7;
    printf("%d\n", x);
    x = x - 2;
    printf("%d\n", x);
    x = x * 5;
    printf("%d\n", x);
    x = x / 3;
    printf("%d\n", x);
    x = x % 2;
    printf("%d\n", x);
}