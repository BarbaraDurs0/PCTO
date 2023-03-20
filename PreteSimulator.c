#include <stdio.h>

int main()
{
      int x;

    printf("inserisci la tua età ");
    scanf("%d", &x);
    if(x > 18)
    {
        printf("Acesso garantito\n");
    }
    else
    {
        printf("Ciao bel bambino\n");
    }
}