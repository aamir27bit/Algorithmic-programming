// Problem: FILLCANDIES
// Platform: codechef
// Language: C​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/FILLCANDIES
// Solved on: 2026-09-20T13:58:55.425Z

#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        
        int x, y, z;
        
        scanf("%d %d %d", &x, &y, &z);

        if (y * z >= x)
        printf("1\n");
        
        else
        printf("%d\n", (x + y * z - 1) / (y * z));
    }

    return 0;
}