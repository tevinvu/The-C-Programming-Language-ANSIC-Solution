#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Chapter 01 ex 16*/

#define MAXLINE 1000
int getline1(char line[], int maxline);
void copy1(char to[], char from[]);
int main()
{
    int max = 0;
    int len;
    int c;
    char line[MAXLINE];
    char maxLine[MAXLINE];

    while((len = getline1(line, MAXLINE)) > 0)
    if(len > max)
    {
        max = len;
        
        copy1(maxLine, line);

    }
    if(max > 0)
    {   
        printf("Longest Line: %s", maxLine);
        printf("Length of longest line: %d", max);
    }
    printf("\n");
    return 0;
}

int getline1(char s[], int maxl)
{
    int c, i;
    for(i = 0; i < maxl-1 && (c = getchar()) != EOF && c != '\n'; ++i)
    {
        s[i] = c;
    }
    if(c == '\n')
    {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

void copy1(char to[], char from[])
{
    int i;
    i = 0;
    while(from[i] != '\0')
       {
            to[i] = from[i];
            ++i;
       }
        
}