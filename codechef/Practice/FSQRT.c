// Problem: FSQRT
// Platform: codechef
// Language: C​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/FSQRT
// Solved on: 2026-09-18T16:39:23.509Z

#include <stdio.h>
#include <math.h>

int main() {
    
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        
        int n;
        
        scanf("%d", &n);

        printf("%d\n", (int)sqrt(n));
    }

    return 0;
}