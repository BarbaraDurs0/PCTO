#include <stdio.h>

int main()
{
    int x = 1;
    while(x>0 && x<101)
    {
        if(x % 3 == 0)
        {
            if(x % 5 == 0)
            printf("fizzbuzz\n");
            else
            {
                printf("fizz\n");
            }
        }
        else
        {
            if(x % 5 == 0)
            {
                printf("buzz\n");
            }
            else
            {
                printf("%d\n", x);
            }
        }
    x = x + 1;
    }

}