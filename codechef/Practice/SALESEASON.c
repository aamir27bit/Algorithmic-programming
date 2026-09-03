// Problem: SALESEASON
// Platform: codechef
// Language: C​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/SALESEASON
// Solved on: 2026-09-03T10:16:05.038Z

#include <stdio.h>

int main(void) {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        int x;
        int discount;

        scanf("%d", &x);

        if (x <= 100)
            discount = 0;
        else if (x <= 1000)
            discount = 25;
        else if (x <= 5000)
            discount = 100;
        else
            discount = 500;

        printf("%d\n", x - discount);
    }

    return 0;
}