// Problem: JENGA
// Platform: codechef
// Language: C​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/JENGA
// Solved on: 2026-09-11T17:05:13.310Z

#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        int N, X;
        scanf("%d %d", &N, &X);

        if (X % N == 0) 
        printf("YES\n");
        else 
        printf("NO\n");
        
    }

    return 0;
}