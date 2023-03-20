#include <stdio.h>

int main()
{
      int x;

    printf("qué tan rápido está girando? ");
    scanf("%d", &x);
    if(x < 50)
    {
        printf("estás girando a una velocidad de %d\n", x);
    }
    else
    {
        x = x / 2;
        printf("estás girando demasiado rápido, tengo que reducir a la mitad tu velocidad: %d\n", x);
    }
}