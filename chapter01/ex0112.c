#include <stdio.h>
/* Chapter 01 ex 12*/

/* To run it: make ex0112
                ./ex0112
                */
//the code is already take care of printing many empty lines
int main()
{
  int c;
  int c1 = 't';
  while( (c = getchar()) != EOF)
    {
        if(c == ' ')
            {
                if(c1 != ' ')
                {
                    
                    putchar(c);
                    printf("\n");
                }
            }   
        else
        {
            putchar(c);
        }
        c1 = c;   
    }

    
    printf("\n");
    return 0;
}


