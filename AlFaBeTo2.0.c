#include <stdio.h>

void Giacobbe (char *x)
{
int i = 0;
    while(x[i] != 0)
    {
        if(x[i] > 64 && x[i] < 91)
        {
            x[i] = x[i] + 32;
        }
        else
        {
            if(x[i] > 96 && x[i] < 123)
            {
                x[i] = x[i] - 32;
            }
        }
        i = i + 1;
    }
printf("%s\n", x);
}

int main()
{
char x[] = "AlBerTo AngeLA";
Giacobbe (x);
}