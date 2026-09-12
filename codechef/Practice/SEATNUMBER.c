// Problem: SEATNUMBER
// Platform: codechef
// Language: C​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/SEATNUMBER
// Solved on: 2026-09-12T16:02:48.965Z

#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);

        if (n <= 15)
    {
        
        if (n >= 11)
        printf("Lower Single\n");
        else
        printf("Lower Double\n");
    }
        
        else
        
        {
            if (n >= 26)
            printf("Upper Single\n");
            else
            printf("Upper Double\n");
        }
    }

    return 0;
}