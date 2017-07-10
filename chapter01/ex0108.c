#include <stdio.h>
/* Chapter 01 ex 08 */
//count blanks, tabs and lines
/* To run it: make ex0108
                ./ex0108
                */
//hit Control + D twice to see the result
int main()
{
   int c, blanks = 0, tabs = 0, lines = 0;
   while((c = getchar()) != EOF)
   {
       if(c == '\n')
            ++lines;
        if(c == ' ')
            ++blanks;
        if(c == '\t')
            ++tabs;
   }

   printf("Blanks: %d \n", blanks);
   printf("Tabs: %d\n", tabs);
   printf("Lines: %d \n", lines);

    printf("\n");
    return 0;
}


