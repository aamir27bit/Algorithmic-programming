// Problem: ACTEMP
// Platform: codechef
// Language: C​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/ACTEMP
// Solved on: 2026-09-06T18:32:13.745Z

#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);

        if (a <= b && c <= b) 
        printf("Yes\n");
        else {
        printf("No\n");
        
            
        }
    }

    return 0;
}