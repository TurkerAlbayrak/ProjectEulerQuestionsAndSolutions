#include <stdio.h>

int main() {

    int t1 = 1;
    int t2 = 1;
    int nextTerm = t1 + t2;
    int total = 0;

    while (nextTerm <= 4000000) {

        if (nextTerm % 2 == 0) {
            total += nextTerm;
        }

        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }

    printf("%d\n", total);

    return 0;
}
