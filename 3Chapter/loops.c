#include <stdio.h>
#include <string.h>

char *expand(char s1[]) {
    char e,x;
    int m;
    if (s1[0] == '-') {
        e = s1[3];
        x = s1[1];
        m = 1;
    }
    else if (s1[2] < s1[0]){
        e = s1[2];
        x = s1[0];
        m = 1;
    }
    else {
        e = s1[0];
        x = s1[2];
        m = 0;
    }
    char wer[x-e];
    int counter = 0;
    if (m) {
        while (e<=x) {
            wer[counter] = e;
            e++, counter++;
        }
    }
    else {
    while (e<=x) {
        wer[counter] = e;
        e++, counter++;
    }
    }
    printf("%s\n",wer);
    return 0;
}

int main() {
    expand("z-a");
}