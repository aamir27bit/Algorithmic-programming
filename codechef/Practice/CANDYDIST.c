// Problem: CANDYDIST
// Platform: codechef
// Language: C​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CANDYDIST
// Solved on: 2026-09-18T16:00:10.367Z

#include <stdio.h>

int main() {
    
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        
        int x, y;
        
        scanf("%d %d", &x, &y);

        if (x % y == 0 && (x / y) % 2 == 0)
        printf("Yes\n");
        else
        printf("No\n");
    }

    return 0;
}