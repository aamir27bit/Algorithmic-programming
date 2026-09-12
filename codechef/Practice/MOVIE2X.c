// Problem: MOVIE2X
// Platform: codechef
// Language: C​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/MOVIE2X
// Solved on: 2026-09-12T16:29:44.082Z

#include <stdio.h>

int main()
{
    int x, y, z;

    scanf("%d %d", &x, &y);

    z = y / 2;

    z = z + (x - y);

    printf("%d\n", z);

    return 0;
}