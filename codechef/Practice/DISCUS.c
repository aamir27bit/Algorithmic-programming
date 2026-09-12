// Problem: DISCUS
// Platform: codechef
// Language: C​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/DISCUS
// Solved on: 2026-09-12T16:05:29.719Z

#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int A, B, C;
        scanf("%d %d %d", &A, &B, &C);

        if (A >= B && A >= C)
        printf("%d\n", A);
        
        else if (B >= A && B >= C)
        printf("%d\n", B);
        
        else
        printf("%d\n", C);
        
    }

    return 0;
}