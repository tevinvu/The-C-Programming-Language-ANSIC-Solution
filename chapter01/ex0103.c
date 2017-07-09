#include <stdio.h>

int main()
{

    float fahr, celsius;
    int lower, upper, step;
    lower = 0;                  //lower limit
    upper = 300;                //upper limit
    step = 20;                  //step
    fahr = lower;
    printf("Fahnrenheit-Celsius convertion table: \n");
    printf("F\t C\n");
    while(fahr <= upper)
    {
        celsius = (5.0/9.0) * (fahr - 32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr += step;
    }

    printf("\n");
    return 0;
}