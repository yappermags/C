#include <stdio.h>
#include <limits.h>

int main () {
    // printf("%d %d\n%d %d\n%d %d\n%ld %ld\n %d %d\n",CHAR_MIN, CHAR_MAX, SHRT_MIN, SHRT_MAX, INT_MIN, INT_MAX, LONG_MIN, LONG_MAX, SCHAR_MIN, SCHAR_MAX);
    int ** i;
    int ** lim;
    int ** c;
    i = 0;
    c=0;
    lim = 10;
    char  s;
    s = "hello";
    while(i < lim-1) {
        while ((c=getchar()) != '\n') {
            while (c != EOF) {
                s[i] = c;
                ++i;
        }
        }
    }
}