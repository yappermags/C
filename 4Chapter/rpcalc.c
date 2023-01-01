#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAXBUF 100
double stack[MAXBUF];


int getln(char line[], int lim) {
    int c, i;

    for (i=0; i < lim-1 && (c=getchar()) != EOF || c != '\n'; ++i)
        line[i] = c;
    if (c == '\n') {
        line[i] = c;
        ++i;
    }
    line[i] = '\0';
    return i;
}

void copy(char from[], char to[]) {
    int i = 0;
    while((from[i] = to[i]) != '\n') {
        i++;
    }
}

int getop(char s[]) {
    
    int i = 0;
    int j = 0;
    // float x, y;
    float buffer[MAXBUF];

    while(s[i] == ' ' || s[i] == '\t') {
        ++i;
    }

    while(s[i] != '\n') {
        // s[i] = buffer[i];
        if(isdigit(s[i]) || s[i] == '.') {
            buffer[j++] = atof(s);
            ++i;
        }
        if (!isdigit(s[i]) && s[i] != '.') {
            buffer[j++];
        }

        
    }
}

int main() {
    ;
}

