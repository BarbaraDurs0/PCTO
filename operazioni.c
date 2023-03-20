#include <stdio.h>

int main()
{
    int a;
    int b;
    printf("inserisci un numero: ");
    scanf("%d", &a);
    printf("inserisci un altro numero: ");
    scanf("%d", &b);
    int somma = a + b;
    int differenza = a - b;
    int prodotto = a * b;
    int quoziente = a / b;
    int resto = a % b;
    printf("Somma: %d. Differenza: %d. Prodotto: %d. Quoziente: %d. Resto: %d\n", somma, differenza, prodotto, quoziente, resto);
    
}