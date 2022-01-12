// This Program To Count

#include <stdio.h>
#define MAXLINE 100 /* maximum input line length */

int my_getline(char line[], int maxline);
int copy(char to[], char from[]);

/* Print longest input as length */
int main()
{

    int len; /* current line length */
    int max; /* maximum length seen so far */

    char line[MAXLINE];    /* current input line */
    char longest[MAXLINE]; /* longest line saved here */

    max = 0;
    int length_longest = 0;
    /* */
    while ((len = my_getline(line, MAXLINE)) > 0)
    {
        /* Return length every line word*/
        if (len > max)
        {
            max = len;
            /* Copy current longesth to array for longest */
            length_longest = copy(longest, line);
        }
    }

    if (max > 0)
    {
        printf("Word is : %s\n", longest);
        printf("Length Word  : %d\n", length_longest);
    }

    return 0;
}

/* getline : read a line into s , return length */
int my_getline(char s[], int lim)
{
    /*
        EXAMPLE : 
        R a k h a \n \0
         */
    int c, i;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
    {
        s[i] = c;
        if (c == '\n')
        {
            s[i] = c;
            ++i;
        }
    }
    s[i] = '\0';
    return i;
}

/* copy : copy 'from' into 'to' ; assume to is big enough */
int copy(char to[], char from[])
{
    int i;
    i = 0;

    /*Copy program to array to save longest */
    while ((to[i] = from[i]) != '\0')
    {
        ++i;
    }
    return i;
}