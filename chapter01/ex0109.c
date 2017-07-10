#include <stdio.h>
/* Chapter 01 ex 09 */

/* To run it: make ex0109
                ./ex0109
                */

int main()
{
  int c, c1;
  c1 = 't';
  while( (c = getchar()) != EOF)
    {
        if( c == ' ')
            {
                if(c1 != ' ')
                  putchar(c);
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


