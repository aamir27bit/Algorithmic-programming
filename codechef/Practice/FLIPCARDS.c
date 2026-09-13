// Problem: FLIPCARDS
// Platform: codechef
// Language: C​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/FLIPCARDS
// Solved on: 2026-09-13T17:23:40.708Z

#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        
        int x, y;
        
        scanf("%d %d", &x, &y);

        if (y < x - y) 
        printf("%d\n", y);
        
        else 
        printf("%d\n", x - y);
        
    }

    return 0;
}