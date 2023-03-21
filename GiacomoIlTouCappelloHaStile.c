#include <stdio.h>

int main()
{
    int x = 0;
    int y = 0;
    while(y < 100)
    {
        y = y + 2;
        x = x + y;
    }
    printf("%d\n", x);
}