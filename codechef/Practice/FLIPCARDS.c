// Problem: FLIPCARDS
// Platform: codechef
// Language: C​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/FLIPCARDS
// Solved on: 2026-09-13T17:16:32.276Z

#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        
        int x, y;
        
        scanf("%d %d", &x, &y);

        if (x>0 && y>0 && x-y>0) 
        printf("%d\n", y);
        
        else
        printf("0\n");
        
    }

    return 0;
}