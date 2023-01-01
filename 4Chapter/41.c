#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

#define MAXLINE 100


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

void replace(char in[], char rep, int start, int stop) {
    int i = 0;
    if (start > stop) {
        printf("Error: Stop must be greater than start\n");
    }
    while(in[i] != '\0') {
        if(i >= start && i < stop) {
           in[i] = rep;
            ++i;
        } else {
         ++i;
        }
    }
}



int main() {
    // getchar() and count values -> getln
    int a, b, c, d, e;
    c = 1;
    int spaces[MAXLINE/2]; // positions of spaces
    int operators[MAXLINE/4]; // positions of operators
    int numbers[MAXLINE]; // positions of operands
    double stack[MAXLINE];
    char s[MAXLINE]; // string which was entered in getchar()
    char buf[MAXLINE]; // buffer for s
    a = getln(s,MAXLINE) - 1;
    // run a for loop to return positions of s
    for (b = 0,d = 0; b < a; b++) {
        if (s[b] == ' ') {
            // log positions of spaces
            spaces[c] = b;
            c++;
        } else if (s[b] >= '0' && s[b] <= '9') {
            // log positions of numbers
            // printf("%d\n",b)
            numbers[d] = b;
            d++;
        } else if (s[b] == '+' || s[b] == '-' || s[b] == '*' || s[b] == '/' || s[b] == '%') {
            // log positions of operators
            operators[e] = b;
            e++;
        }
    }
    spaces[c] = a;
    b = c = d = e = 0;
    while(b < a) {

        if (c == spaces[d]) {
            stack[d] = atof(buf);
            replace(buf,'0',0,c);
            d++;
        } else {
            buf[c] = numbers[b];
            b++, c++;
        }
    }

int i;
for(i = 0; i < 10; i++) {
    printf("%f\n",stack[i]);
}
}