// Problem: BULLET
// Platform: codechef
// Language: C​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/BULLET
// Solved on: 2026-09-14T20:34:03.682Z

#include <stdio.h>

int main() {
    
    int t;
    
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        
        int x, y, z;

        scanf("%d %d %d", &x, &y, &z);

        int time = y / x;

        if (z > time)
        printf("%d\n", z - time);
        
        else
        printf("0\n");
    }

    return 0;
}