// Problem: THREETOPICS
// Platform: codechef
// Language: C​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/THREETOPICS
// Solved on: 2026-09-04T18:31:52.044Z

#include <stdio.h>

int main() {
    int a, b, c, x;

    scanf("%d %d %d %d", &a, &b, &c, &x);

    if (x == a || x == b || x == c) {
        printf("Yes\n");
    }
    else 
        printf("No\n");
    

    return 0;
}