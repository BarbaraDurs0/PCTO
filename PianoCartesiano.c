#include <stdio.h>

int main()
{
    int x;
    int y;
    printf("Scrivi il primo numero: ");
    scanf("%d", &x);
    printf("Scrivi il primo numero: ");
    scanf("%d", &y);
    
    if(x < 0 && y < 0)
    {
        printf("Il punto è nel 3° quadrante.\n");
    }
        if(x > 0 && y < 0)
    {
        printf("Il punto è nel 4° quadrante.\n");
    }
        if(x > 0 && y > 0)
    {
        printf("Il punto è nel 1° quadrante.\n");
    }
        if(x < 0 && y > 0)
    {
        printf("Il punto è nel 2° quadrante.\n");
    }
            if(x == 0 && y != 0)
    {
        printf("Il punto è sull'asse delle x\n");
    }
        if(y == 0 && x != 0)
    {
        printf("Il punto è sull'asse delle y.\n");
    }
    if(x == 0 && y == 0)
    {
        printf("Il punto coincide con il di intersezzione degli assi x e y: il centro.\n");
    }
}