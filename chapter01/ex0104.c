#include <stdio.h>

int main()
{

    float fahr, celsius;
    int lower, upper, step;
    lower = 0;                  //lower limit
    upper = 300;                //upper limit
    step = 20;                  //step
    celsius = lower;
    printf("Celsius-Fahnrenheit convertion table: \n");
    printf("C\t F\n");
    while(fahr <= upper)
    {
        fahr = (9.0/5.0) * celsius + 32;
        printf("%3.0f %6.1f\n", celsius, fahr);
        celsius += step;
    }

    printf("\n");
    return 0;
}

