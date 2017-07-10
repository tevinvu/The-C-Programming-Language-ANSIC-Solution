
#include <stdio.h>
/* Chapter 01 ex 05 */

int main()
{

    int fahr;
    printf("Fahrenheit-Celsius table: \n");
    printf("F\t C\n");
    for(fahr = 300; fahr >= 0; fahr -= 20)
    {
        printf("%3d %6.1f\n", fahr, (5.0/9.0) * (fahr - 32));
    }
    printf("\n");
    return 0;
}

