#include <stdio.h>
#include <stdlib.h> 
#include <time.h>

int main()
{
int x;
int y;
int j = 0;
int seed = time(NULL);
srand(seed);
while(j < 100)
{
    x = rand() % 10;
    printf("scegli un numero da 1 a 9 (compresi): ");
    scanf("%d", &y);
    if(y > 0 || y < 10)
    {
        if(y == x)
        {
            j = j + 1;
            printf("Bravo, ora hai %d punti.\n", j);
        }
        else
        {
            printf("Sbaglito, la risposta corretta era %d.\n", x);
        }
    }
    else
    {
        printf("Errore.\n");
    }
    if(j > 9)
    {
        break;
    }    
}
 printf("Complimenti, hai perso tempo prezzioso della tua unica vita per completare un gioco del cacchio.\n");   
}