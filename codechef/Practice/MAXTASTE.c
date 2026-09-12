// Problem: MAXTASTE
// Platform: codechef
// Language: C​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/MAXTASTE
// Solved on: 2026-09-12T16:22:28.613Z

#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int i=0 ; i<t ; i++)
    {
        int a, b, c, d;
        int first, second;

        scanf("%d %d %d %d", &a, &b, &c, &d);


        if (a >= b)
        {first = a;}
        else
        {first = b;}

        
        if (c >= d)
        {second = c;}
        else
        {second = d;}

        printf("%d\n", first + second);
    }

    return 0;
}