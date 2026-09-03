// Problem: MINPIZZA
// Platform: codechef
// Language: C​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/MINPIZZA
// Solved on: 2026-09-03T15:49:07.966Z

#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t > 0) {
        int n, x, pizzas;

        scanf("%d %d", &n, &x);

        pizzas = (n * x + 3) / 4;

        printf("%d\n", pizzas);

        t--;
    }

    return 0;
}

