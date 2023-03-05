/* Please come back to this later to optimize it

*/

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

#define MAXLINE 100
#define MULTIPLY -42
#define ADD -43
#define SUBTRACT -45
#define DIVIDE -47
#define MOD -37

double stack[MAXLINE];
double stbuf[MAXLINE];

/* pop: remove items from a floating-point array */
void mvItems(double in[], int start, int stop) {
    int i,j,k;
    // Step 1: get length of in
    for (i = 0;(float) in[i] != 0.00000 || (float) in[i+1] != 0.00000; i++) {
    }
    j = start;
    k = stop + 1;
    // Step 2: get rid of values in start and stop
    while (j < i) {
        in[j] = in[k];
        j++, k++;
    }
}

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

/* grs: grab a string and output only certain characters inside the string */
char *grs(char in[], char out[], int st, int end) {
    int i = 0;
    while (st < end) {
        out[i] = in[st];
        ++i, ++st;
    } 
    out[i] = '\0';
}


int sp = 0;
double val[MAXLINE];

/* push: push f onto value stack */
void push (double f) {
    if (sp < MAXLINE)
        val[sp++] = f;
    else
        printf("error: stack full, can't push %g\n",f);
}
/* pop: pop and return top value from stack */
double pop(void) {
if (sp > 0)
    return val[--sp];
else {
    printf("error: stack empty\n");
    return 0.0;
}
}

int main() {
    // getchar() and count values -> getln
    int a, b, c, d, e;
    c = 1;
    int spaces[MAXLINE/2]; // positions of spaces
    char s[MAXLINE]; // string which was entered in getchar()
    char buf[MAXLINE]; // buffer for s
    a = getln(s,MAXLINE) - 1;
    int z = a;

        // run a for loop to return positions of s
spaces[0] = 0;
    for (b = 0,d = 0; b < z; b++) {
        if (s[b] == ' ') {
            // log positions of spaces
            spaces[c] = b;
            c++;
        }
    }
    spaces[c] = z;

    // run a for loop through spaces
    for (b = 1, d = 0,e = 0; b <= c; b++, e++) {
        grs(s,buf,d,spaces[b]);
        stack[e] = atof(buf);
        if (buf[0] == '+' || buf[0] == '-' || buf[0] == '*' || buf[0] == '/' || buf[0] == '%') {
            stack[e] = buf[0] * -1;
        }
        d = spaces[b] + 1;
    }





    // b = c = d = e = 0;
    b = 0, c = 0, d = 0;
    while (stack[1] != (float) 0.00000 && stack[2] != (float) 0.00000) {
        switch ((int) stack[b]) {
        case MULTIPLY:
            // multiply
            stack[b] = stack[b-2] * stack[b-1];
            mvItems(stack,b-2,b-1);
            b = 1;
            break;
        case ADD:
            // add
            stack[b] = stack[b-2] + stack[b-1];
            mvItems(stack,b-2,b-1);
            b = 1;
            break;
        case SUBTRACT:
            // subtract
            if (b == 2) 
            stack[b] = stack[b-2] - stack[b-1];
            mvItems(stack,b-2,b-1);
            for (d = 0; d < 8; d++) {
            }
            b = 1;
            break;
        case DIVIDE:
            // divide
            if (stack[b-1] == (float) 0.00000) {
                printf("error: zero divisor\n");
                break;
            } else {
                stack[b] = stack[b-2] / stack[b-1];
                mvItems(stack,b-2,b-1);
                b = 1;
                break;
            }
        case MOD:
            stack[b-1] = (stack[b-1] = (int) 0) ? 1 : stack[b-1];
            stack[b] = (int) stack[b-2] % (int) stack[b-1];
            mvItems(stack,b-2,b-1);
            b = 1;
            break;
        default:
            b++;
            break;
        }
    }
    printf("%9.1f\n",stack[0]);
    }