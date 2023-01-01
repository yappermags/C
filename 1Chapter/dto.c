#include <stdio.h>
#include <math.h>
/* Converts decimal number to octal bit (useful up to 32,768) */
long dto(int d) {
    float x, y, m;
    int ii, ce;
    long c = 12, i = 2, k = 1;
    x = floor(d / 8);
    int r[8];
    r[0] = 0, r[1] = 0;
    int start[8*8*8], end[8*8*8];
    end[0] = start[0] = 0;
    end[1] = 14, start[1] = 2;
    while(i <= 8*8*8) {
        start[i] = start[i-1] + 16;
        end[i] = end[i-1] + 16;
        r[i] = c;
        i++, c-=2;
    }
    
    if (x > 8) {
        x = 0;
        x = d / (64);
        y = (d / 8 - 8) * 2;
        m = 34;
        if (x != 1) {
            m += end[(int) x] - r[(int) x];
        }
    }
    printf("%d\n",d);
    if (d >= 512) {
        ce = (x >= 64) ? ((int) x / 64) * 2000 : 0;
        // for (ii = 0; d < pow(8,ii); ii++) {

        // }
        return (d + 2 * x + m + y) + 200 * ((int) x / 8) + ce;
    } else {
        return d + 2 * x + m + y;
    }
}


int main() {
    printf("%ld\n",dto(255));
    printf("%c\n",161);
}