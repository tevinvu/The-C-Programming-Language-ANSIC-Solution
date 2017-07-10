#include <stdio.h>
/* Chapter 01 ex 06 */

//get 0 when you hit Control+D (for mac)
//get 1 when you enter anything

int main()
{
    int c;
    c = (getchar())!= EOF;
    
    printf("%d at EOF\n", c);
    printf("\n");
    return 0;
}


