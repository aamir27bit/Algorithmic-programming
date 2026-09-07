// Problem: SST
// Platform: codechef
// Language: C​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/SST
// Solved on: 2026-09-07T17:56:05.051Z

#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        
        int A, B;
        
        scanf("%d %d", &A, &B);

        if (2 * A > B) 
        printf("FIRST\n");
        
        else if (2 * A == B) 
        printf("ANY\n");
        
        else 
        printf("SECOND\n");
        
    }

    return 0;
}