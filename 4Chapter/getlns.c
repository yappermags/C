#include <stdio.h>
#include <ctype.h>

#define MAXLINE 10000 // max input line length]

int getlns(char line[], int maxline);
void copy(char from[], char to[]);

//print the longest input line
int main() {
    int len; //current line length
    int max; //max line length
    char line[MAXLINE]; //current input line
    char longest[MAXLINE]; //longest line saved

    max = 0;
    while((len = getlns(line,MAXLINE)) > 0) {
        if (len > 80) {
            printf("Over 80 character line detected\n");
            printf("Contents:\n%s",line);
            printf("Total # of characters: %d\n",len);
        }
        if (len > max) {
            max = len;
            copy(line, longest);
        }
    }
    if (max > 0)
        printf("\n%s",longest);
    return 0;
}

/* getline: read a line into s, return length */
int getln(char s[], int lim) {
    int c, i;

    for (i=0; i < lim-1 && (c=getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char from[], char to[]) {
    int i = 0;
    while((to[i] = from[i]) != '\0')
        ++i;
}