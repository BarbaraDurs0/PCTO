#include <stdio.h>

int main()
{
    float x;
    printf("Inserire temperatura in Celsius: ");
    scanf("%f", &x);
    if(x < -273.15)
    {
        printf("error %f < -273.15\n", x);
    }
    else
    {
        float y;
        float z;
        y = x + 273.15;
        z = x * (9/5) + 32;
        printf("Fahrenheit: %f. Kelvin: %f\n", z, y);
    }
}