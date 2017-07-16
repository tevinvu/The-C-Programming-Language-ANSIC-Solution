#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Chapter 01 ex 17*/

#define MAXLINE 1000
int getline1(char line[], int maxline);
void copy1(char to[], char from[]);
int main()
{
    int max = 80;
    int len;
    int c;
    char line[MAXLINE];
    char maxLine[MAXLINE];

    while((len = getline1(line, MAXLINE)) > 0)
    {
        if(len >= max)
        {
        printf("Longer than 80 characters: %s", line);
        printf("Length of longer than 80 characters: %d\n", len);
        }
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

