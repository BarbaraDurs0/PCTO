#include <stdio.h>

int main()
{
    int x;
    int y = 0;
    int z = 0;
    int k;
    while(y == 0)
    {
        printf("inserisci un numero di pezzi da aggiungere: ");
        scanf("%d", &x);
        if(x > 0)
        {
            z = z + x;
            if(z > 50)
            {
                k = (z * 5) * (100 / 85);
                printf("Il prezzo totale ammonta a: %d\n", k);
            }
            else
            {
                if(z > 30)
                {
                    k = (z * 5) * (100 / 90);
                printf("Il prezzo totale ammonta a: %d\n", k);
                }
                else
                {
                    k = z * 5;
                printf("Il prezzo totale ammonta a: %d\n", k);
                }
            }

           
        }
        else
        {
            y = y - 1;
            printf("Hai inserito il numero negativo %d, quindi il programma si è stoppato\n", x);
        }
        
    }
    
    
}