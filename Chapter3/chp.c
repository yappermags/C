#include <stdio.h>

/* binsearch: find x in v[0] <= v[1] <= ... <= v[n- 1] */
int binsearch(int x, int v[], int n) {
    int low, high, mid;
    low = 0;
    high = n - 1;
    while (low <= high) {
        mid = (low+high) / 2;
        if (x < v[mid]) {
            high = mid + 1;
        }
        else if (x > v[mid]) {
            low = mid + 1;
        }
        else {
            return mid;
        }
    }
    return -1;
}

int sbinsearch(int x, int v[], int n) {
    int low, high, mid;
    low = 0;
    high = n - 1;
    while (low <= high) {
        mid = (low+high) / 2;
        if (x < v[mid]) {
            high = mid + 1;
        }
        else if (x > v[mid]) {
            low = mid + 1;
        }
        else {
            return mid;
        }
    }
    return -1;
}


int main() {
    int i[7] = {1,2,3,4,5,6,7};
    // i = [1,2,3,4];
    printf("%d\n",binsearch(2,i,7));
}