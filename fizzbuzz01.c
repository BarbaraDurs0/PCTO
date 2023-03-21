#include <stdio.h>

int main()
{
 int x = 0;
 while(x > -1 && x < 100)
 {
    if(x < 10)
    {
        printf("0%d\n", x);
    }
    else
    {
        printf("%d\n", x);
    }
    x = x + 1;
 }

}