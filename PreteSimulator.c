#include <stdio.h>

int main()
{
      int x;

    printf("inserisci la tua età ");
    scanf("%d", &x);
    if(x > 18)
    {
        printf("Hai un figlio che vuole fare il chirichetto?\n");
    }
    else
    {
        if(x > 10)
        {
          printf("Ciao bel bambino\n");  
        }
        else
        {
            printf("Sei molto giovane ma, come Dio accetta tutti nella sua mensa, anche io non ho problemi ad accettarti in questa camera ;)\n");
        }
 
    }
}