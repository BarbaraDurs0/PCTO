#include <stdio.h>

int main()
{
    int x;
    int y = 0;
    float z = 0;
    float k;
    float j = 0;
    while(y == 0)
    {
        printf("inserisci un numero: ");
        scanf("%d", &x);
        if(x >= 0)
        {
            z = z + x; 
            j = j + 1;
            k = z / j;
            printf("La media dei numeri scritti fino ad ora è: %f\n", k);
        }
        else
        {
            y = y - 1;
            printf("Hai inserito il numero negativo %d, quindi il programma si è stoppato. Ora vattene o dovro rimuoverti con la forza usando delle ruspe\n", x);
        }
        
    }
    
    
}