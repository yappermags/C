#include <stdio.h>
#include <string.h>

char expand(char s1[]) {
    int e = s1[0];
    int x = s1[2];
    int f = e - x;
    int l[f];

    return x;

}


int main() {
    char a[] = "string literal";
    char *p  = "string literal";
    p = "hello world";
    printf("%s\n",a);
}