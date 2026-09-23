// Problem: MINCOINS
// Platform: codechef
// Language: C​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/MINCOINS
// Solved on: 2026-09-23T10:25:07.545Z

#include <stdio.h>

int main() {

    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {

        int x;
        
        scanf("%d", &x);

        if (x % 5 != 0)
        printf("-1\n");

        else if (x % 10 == 0)
        printf("%d\n", x / 10);

        else
        printf("%d\n", x / 10 + 1);
    }

    return 0;
}