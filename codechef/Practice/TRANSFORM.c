// Problem: TRANSFORM
// Platform: codechef
// Language: C​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/TRANSFORM
// Solved on: 2026-09-14T09:13:07.645Z

#include <stdio.h>

int main() {
    
    int t;
    
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {

        int x;
        
        scanf("%d", &x);

        if (x % 3 == 1) 
        printf("HUGE\n");
        
        else if (x % 3 == 2) 
        printf("SMALL\n");
        
        else 
        printf("NORMAL\n");
        
    }

    return 0;
}