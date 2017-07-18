#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Chapter 01 ex 18*/
//not finish yet will come back later
#define MAXLINE 1000
int getline1(char line[], int maxline);
void copy(char to[], char from[]);

int main()
{
    int max = 0;
    int len;
    int c;
    int i = 0;
    char line[MAXLINE];
    char newLine[MAXLINE];

    while((len = getline1(line, MAXLINE)) > 0)
    {
        copy(newLine, line);
        printf("%s", newLine);
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

void copy(char to[], char from[])
{
    int i = 0;
    while(from[i] != '0')
    {
        if(from[i] == ' ' || from[i] == '\t')
            from[i] = ' ';
        to[i] = from[i];
        ++i;
    }
}
