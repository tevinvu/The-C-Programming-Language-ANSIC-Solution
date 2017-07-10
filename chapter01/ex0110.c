#include <stdio.h>
/* Chapter 01 ex 10 */

/* To run it: make ex0110
                ./ex0110
                */

int main()
{
  int c;
  
  while( (c = getchar()) != EOF)
    {
        if(c == '\t')
            printf("\\t");
        else if(c == '\b')
            printf("\\b");
        else if(c == '\\')
            printf("\\\\");
        else
        {
            putchar(c);
        }
           
    }

    
    printf("\n");
    return 0;
}


