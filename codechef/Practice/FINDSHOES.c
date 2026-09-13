// Problem: FINDSHOES
// Platform: codechef
// Language: C​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/FINDSHOES
// Solved on: 2026-09-13T18:29:23.306Z

#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        
        int x, y;
        
        scanf("%d %d", &x, &y);

        if (y >= x)
        printf("%d\n", x);
        
        else 
        printf("%d\n", 2 * x - y);
        
    }

    return 0;
}