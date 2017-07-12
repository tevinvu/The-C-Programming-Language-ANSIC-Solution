#include <stdio.h>
/* Chapter 01 ex 14*/

#define CHARAC 26
int main()
{
  int c, i, j;
  int chara1 = 97;
  int chara2 = 65;
  int bigCharac[CHARAC] = {0};          //A-Z
  int smallCharac[CHARAC] = {0};        //a-z

  while( (c = getchar()) != EOF)
    {
         if(c >= 'a' && c <= 'z')
            {
                ++smallCharac[c - 'a'];
            }
        else if(c >= 'A' && c <= 'Z')
        {
            ++bigCharac[c - 'A'];
        }
    }
    //print a-z and total character appeared by stars
    for(i = 0; i < CHARAC; ++i)
    {
       printf("%c: ", chara1);
       for(j = 0; j < smallCharac[i]; ++j)
       {
           printf("*");
       }
       ++chara1;
       printf("\n");
    }
    
    //print A-Z and total chracter appeared by stars
    for(i = 0; i < CHARAC; ++i)
    {
       printf("%c: ", chara2);
       for(j = 0; j < bigCharac[i]; ++j)
       {
           printf("*");
       }
       ++chara2;
       printf("\n");
    }
    printf("\n");
    return 0;
}
