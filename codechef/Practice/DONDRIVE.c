// Problem: DONDRIVE
// Platform: codechef
// Language: C​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/DONDRIVE
// Solved on: 2026-09-01T08:28:09.544Z

#include <stdio.h>

int main(void) {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        int x, y;
        scanf("%d %d", &x, &y);

        printf("%d\n", x - y);
    }

    return 0;
}