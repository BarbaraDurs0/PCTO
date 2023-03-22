#include <stdio.h>

int main()
{
int x[6];
int i = 0;
while(i < 6)
{
    x[i] = 2 * i;
    printf("x:%d = i:%d\n", i, x[i]);
    i = i + 1;  
}
}