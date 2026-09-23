// Problem: CHEFEREN
// Platform: codechef
// Language: C​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CHEFEREN
// Solved on: 2026-09-23T10:00:00.313Z

#include <stdio.h>

int main() {

    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {

        int n, a, b;
        scanf("%d %d %d", &n, &a, &b);

        int odd = (n + 1) / 2;
        int even = n / 2;

        int total = odd * b + even * a;

        printf("%d\n", total);
    }

    return 0;
}