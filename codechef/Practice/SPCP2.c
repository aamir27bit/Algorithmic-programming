// Problem: SPCP2
// Platform: codechef
// Language: C​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/SPCP2
// Solved on: 2026-09-23T10:40:47.157Z

#include <stdio.h>

int main() {

    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {

        int x, n;
        scanf("%d %d", &x, &n);

        if (x * 100 >= n)
        printf("0\n");
        
        else
        printf("%d\n", (n + 99) / 100 - x);
    }

    return 0;
}