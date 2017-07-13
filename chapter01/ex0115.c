#include <stdio.h>
/* Chapter 01 ex 15*/

float convertToF(float);
int main()
{
    float fahr, celsius;
    int lower, upper, step;
    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    while (fahr <= upper)
    {
        celsius = convertToF(fahr);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
  
    printf("\n");
    return 0;
}

float convertToF(float fahr)
{
    int cel;
    cel = (5.0/9.0) * (fahr - 32.0);
    return cel;
}