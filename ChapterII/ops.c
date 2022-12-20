#include <stdio.h>
/* getbits: get n bits from position p*/
unsigned getbits(unsigned x, int p, int n, int y) {

    return (x >> (p+1-n)) & ~(~0 << (n - y)); 
    // x shifted right by (p + 1 - n) & ~(~0 shifted left by n)
}

unsigned invert(unsigned x, int p, int n) {
    return (x << (p-1+n)) & (~0 >> n);
}

/* rightrot: rotate x to the right by n positions*/

int rightrot(int x, int n) {
    printf("%d\n",x);
    return x >> (n*3);
}

/* bitcount: count 1 bits in x */
int bitcount(unsigned x) {
    int b;
    for (b = 0; x != 0; x >>= 1) {
        if (x &= (x - 1)) {

            b++;
        }
    }
    return b;
}

int slower(int c) {
    return c >= 'A' && c <= 'Z' ? c + 'a' - 'A' : c;
 } 

int main() {
    
    // printf("%d\n",bitcount(0012));
    printf("%d\n", slower('a'));
}