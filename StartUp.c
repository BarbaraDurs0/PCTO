#include <stdio.h>

int main()
{
int a = 0;
int b;
int c = 0;
int d;
int e;
float prezzo;
float consegna = 9.99; 
float totale = 0;
int allergia[9] = {1, 1, 1, 1, 1, 1, 1, 1, 1};
printf("Benvenuto su 'AMA il cibo', servizio di ordine e di consegna ecosostenibile.\n");
while(a == 0)
{
    b = 0;
    printf("Prima di iniziare vorremo sepere se possiede delle allergie.\n");
    printf("1: Non possiedo allergie\n");
    printf("2: Possiedo allergie\n");
    scanf("%d", &a);
    if(a == 2)
    {
        printf("Seleziona 1 se NON possiedi il tipo di allergia indicato, 2 se la possiedi.\n");
        printf("glutine: ");
        scanf("%d", &allergia[0]);
        printf("crostacei: ");
        scanf("%d", &allergia[1]);
        printf("uova: ");
        scanf("%d", &allergia[2]);
        printf("pesce: ");
        scanf("%d", &allergia[3]);
        printf("soia: ");
        scanf("%d", &allergia[4]);
        printf("latte: ");
        scanf("%d", &allergia[5]);
        printf("frutta a guscio: ");
        scanf("%d", &allergia[6]);
        printf("sesamo: ");
        scanf("%d", &allergia[7]);
        printf("molluschi: ");
        scanf("%d", &allergia[8]);
    }
    else
    if(a != 1)
    {
        printf("Errore: valore non accettabile inserito.\n");
        a = 0;
        b = 9;
    }
    while(b != 9)
    {
        if(allergia[b] < 1 || allergia[b] > 2)
        {
            printf("Errore: valore non accettabile inserito.\n");
            a = 0;
            b = 9;
        }
        else
        {
            b = b + 1;
        }
    }
}
while(c == 0)
{
    e = 0;
    printf("Che tipo di prodotti stai cercando?\n");
    printf("1: Carne / Pesce\n");
    printf("2: Prodotti animali (uova, latte e derivati, ecc...)\n");
    printf("3: Frutta / Verdura\n");
    printf("4: Cereali\n");
    printf("5: Condimenti\n");
    printf("6: Snack (dolci e salati)\n");
    printf("7: Voglio pagare\n");
    scanf("%d", &d);
    if(d == 1)
    {
        while(e == 0)
        {
            printf("Seleziona il prodotto che preferisci.\n");
        }   
    }
    else if(d == 2)
    {
        while(e == 0)
        {
            printf("Seleziona il prodotto che preferisci.\n");
        }   
    }
    else if(d == 3)
    {
        while(e == 0)
        {
            printf("Seleziona il prodotto che preferisci.\n");
        }   
    }
    else if(d == 4)
    {
        while(e == 0)
        {
            printf("Seleziona il prodotto che preferisci.\n");
        }   
    }
    else if(d == 5)
    {
        while(e == 0)
        {
            printf("Seleziona il prodotto che preferisci.\n");
        }   
    }
    else if(d == 6)
    {
        while(e == 0)
        {
            printf("Seleziona il prodotto che preferisci.\n");
        }   
    }
    else if(d == 7)
    {
        c = 1;
    }
    else
    {
        printf("Errore: valore non accettabile inserito.\n");  
    }
}
}
