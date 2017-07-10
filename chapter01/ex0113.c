#include <stdio.h>
/* Chapter 01 ex 13*/


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
                    printf("\n");
                }
            }   
        else
        {
           printf("*");
        }
        c1 = c;   
    }

    
    printf("\n");
    return 0;
}


