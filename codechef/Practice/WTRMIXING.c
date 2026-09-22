// Problem: WTRMIXING
// Platform: codechef
// Language: C​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/WTRMIXING
// Solved on: 2026-09-22T17:57:30.077Z

#include <stdio.h>
#include <stdlib.h>

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        
        int a, b, x, y;
        
        scanf("%d %d %d %d", &a, &b, &x, &y);

        if (a == b)
        printf("YES\n");
        
        else if (b > a && abs(a - b) <= x)
        printf("YES\n");
        
        else if (b < a && abs(a - b) <= y)
        printf("YES\n");
        
        else
        printf("NO\n");
    }

    return 0;
}