// Problem: VALENTINE
// Platform: codechef
// Language: C​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/VALENTINE
// Solved on: 2026-09-22T14:52:07.827Z

#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        
        int x, y;
        
        scanf("%d %d", &x, &y);

        if (y > x)
        printf("0\n");
        
        else
        printf("%d\n", x / y);
    }

    return 0;
}