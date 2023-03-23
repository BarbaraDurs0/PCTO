#include <stdio.h>
int Pomodoro (char *a)
{
    int i = 0;
    while(a[i] != 0)
    {
        i = i + 1;
    }
    return(i);
}
int main()
{
    int k;
    char a[] = "Altalena";
    k = Pomodoro (a);
    printf("La parola %s è composta da %d lettere\n", a, k);
}