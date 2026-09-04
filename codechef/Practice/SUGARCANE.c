// Problem: SUGARCANE
// Platform: codechef
// Language: C​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/SUGARCANE
// Solved on: 2026-09-04T07:42:48.268Z

#include <stdio.h>

int main() {

    int t;
    scanf("%d", &t);

    for(int i = 0; i < t; i++) {

        int x, z;
        scanf("%d", &x);

        z = x * 15;

        printf("%d\n", z);
    }

    return 0;
}