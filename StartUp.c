#include <stdio.h>

int main()
{
int a = 0;
int b;
int c = 0;
int d;
int e;
int f;
float spedizione = 6.90; 
float totale = 0;
int allergia[9] = {1, 1, 1, 1, 1, 1, 1, 1, 1};
float Lonza = 0;
float Salsiccia = 0;
float Scottona = 0;
float Hamburger = 0;
float Pollo = 0;
float Salmone = 0;
float Sgombro = 0;
float Gambero = 0;
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
    else if(a != 1)
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
    printf("1: Carne / Pesce / Crostacei\n");
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
            f = 0;
            printf("Seleziona il prodotto che preferisci.\n");
            printf("1: Lonza di maiale (29,90 $/unità)\n");
            printf("2: Salsiccia con il finocchio sottovuoto 1,5 kg -22,90 $- (15,20 $/kg)\n");
            printf("3: Fette sottili di scottona 150 g -4,50 $- (30,27 $/kg)\n");
            printf("4: Hamburger di scottona 2*150 g -4,90 $- (15,30 $/kg)\n");
            printf("5: Petto di pollo 500 g -6,50 $- (13,00 $/kg)\n");
            if(allergia[3] != 2)
            {
                printf("6: Salmone affumicato 100 g (4,90 $/unità)\n");
                printf("7: Filetti di sgombro 120 g -2,00 $- (17,00 $/kg)\n");
            }
            if(allergia[1] != 2)
            {
                printf("8: Code di gambero 200 g -8,00 $- (40,00 $/kg)\n");
            }
            printf("9: Indietro\n");
            scanf("%d", &f);
            if(f == 1)
            {
                printf("Seleziona la quantità.\n");
                scanf("%f", &Lonza);
            }
            else if(f == 2)
            {
                printf("Seleziona la quantità.\n");
                scanf("%f", &Salsiccia);
            }
            else if(f == 3)
            {
                printf("Seleziona la quantità.\n");
                scanf("%f", &Scottona);
            }
            else if(f == 4)
            {
                printf("Seleziona la quantità.\n");
                scanf("%f", &Hamburger);
            }
            else if(f == 5)
            {
                printf("Seleziona la quantità.\n");
                scanf("%f", &Pollo);
            }
            else if(f == 6 && allergia[3] != 2)
            {
                printf("Seleziona la quantità.\n");
                scanf("%f", &Salmone);
            }
            else if(f == 7 && allergia[3] != 2)
            {
                printf("Seleziona la quantità.\n");
                scanf("%f", &Sgombro);
            }
            else if(f == 8 && allergia[1] != 2)
            {
                printf("Seleziona la quantità.\n");
                scanf("%f", &Gambero);
            }
            else if(f == 9)
            {
                e = 1;
            }
            else
            {
                printf("Errore: valore non accettabile inserito.\n");
            }
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
if(Lonza > 0)
{
    totale = totale + (Lonza * 29.90);
}
if(Salsiccia > 0)
{
    totale = totale + (Salsiccia * 22.90);
}
if(Scottona > 0)
{
    totale = totale + (Scottona * 4.50);
}
if(Hamburger > 0)
{
    totale = totale + (Hamburger * 4.90);
}
if(Pollo > 0)
{
    totale = totale + (Pollo * 6.50);
}
if(Salmone > 0)
{
    totale = totale + (Salmone * 4.90);
}
if(Sgombro > 0)
{
    totale = totale + (Sgombro * 2.00);
}
if(Gambero > 0)
{
    totale = totale + (Gambero * 8.00);
}
if(totale == 0)
{
    printf("Ci dispiace che non sei riuscito a trovare quello che cercavi, ma se cambierai idea torna pure a trovarci.\n");
}
if(totale > 70)
{
    printf("Dato che il tuo ordine supera i 70 $ la spedizione è gratuita!\n");
    printf("Il totale ammonta a %f.\n", totale);
}
if(totale <= 70 && totale >0)
{
    printf("Dato che il tuo ordine non supera i 70 $ la spedizione non è gratuita!\n");
    totale = totale + spedizione;
    printf("Il totale ammonta a %f.\n", totale);
}
printf("Grazie per averci visitato!");
}
