/*
Write a function reverse(s) that reverses the character string s. Use it to
write a program that reverses its input a line at a time.
*/
#include <stdio.h>
#define MAXLINE 1000
#define POINTER1 0

int my_getline(char line[], int maxline);
void reverse(char s[], int pointe1, int pointer2);
int main()
{
    int len;            /* current line length  */
    char line[MAXLINE]; /* Current input line */
    int pointer1;
    int pointer2;
    while ((len = my_getline(line, MAXLINE)) > 0)
    {
        // do Reseve
        pointer2 = --len;
        pointer1 = POINTER1;
        reverse(line, pointer1, pointer2);
        printf("%s\n", line);
    }
    return 0;
}
/*getline : read a line into s and return length */
int my_getline(char s[], int lim)
{
    int c, i, pointer1, pointer2;
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
/* resevere : resever every character  */
void reverse(char line[], int pointer1, int pointer2)
{

    while (pointer1 < pointer2 || pointer2 == pointer1)
    {
        int temp = line[pointer1];
        line[pointer1] = line[pointer2];
        line[pointer2] = temp;
        pointer1++;
        pointer2--;
    }
}