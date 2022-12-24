#include <stdio.h>
#include <ctype.h>

// atoi: convert s to integer


int atoi(int co);
 /* atoi: convert s to integer */ 
 int atoi(int co) {
    double fd;
    signed char sd, full;
    int m;
    fd = (co / 1.6)/10;
    m = co % 16;
    if (m >= 10 && m <= 15) {
        if (m == 10)
            sd = 'A';
        else if (m == 11)
            sd = 'B';
        else if (m == 12)
            sd = 'C';
        else if (m == 13)
            sd = 'D';
        else if (m == 14)
            sd = 'E';
        else if (m == 15)
            sd = 'F';
    else {
        sd = (char) m;
    }
    printf("%d\n\n",m);
    }
 }

int main() {
    printf("%d\n", atoi('s'));
}

