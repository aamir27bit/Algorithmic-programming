// Problem: CHEFSCORE
// Platform: codechef
// Language: C​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CHEFSCORE
// Solved on: 2026-09-10T17:47:56.601Z

#include <stdio.h>

int main()
{
    int t;

    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int n, x, y;

        scanf("%d %d %d", &n, &x, &y);

        if (y <= n * x && y % x == 0)
        printf("YES\n");
        
        else
        printf("NO\n");
        
    }

    return 0;
}