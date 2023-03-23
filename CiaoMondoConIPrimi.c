#include <stdio.h>

int Bob (int i)
{
int z = 0;
int y = 1;
int k;
        while(z != 2)
        {
            z = 0;
            k = 1;
            y = y + 1;
            while(k <= y)
            {
                if(y % k == 0)
                {
                    z = z + 1;
                }
                k = k + 1; 
            }
            if(z == 2)
            {
                if(i == 0)
                {
                    return(y);
                }
                i = i - 1;
                z  = 0;
            }
         }
}

int main()
{
int f;
int n;
int i = 0;
printf("Scegli un numero intero: ");
scanf("%d", &n);
int x[n];
    while(i < n)
    {
        f = Bob (i);  
        x[i] = f;
        printf("%d = %d\n", i, f); 
        i = i + 1;
    }    
}  
