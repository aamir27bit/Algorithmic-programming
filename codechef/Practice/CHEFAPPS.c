// Problem: CHEFAPPS
// Platform: codechef
// Language: C​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CHEFAPPS
// Solved on: 2026-09-23T09:45:11.284Z

#include <stdio.h>

int main() {

    int t;
   
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {

        int s, x, y, z;
       
        scanf("%d %d %d %d", &s, &x, &y, &z);

        if (s >= x + y + z)
        printf("0\n");

        else if (s - x >= z || s - y >= z)
        printf("1\n");

        else
        printf("2\n");
    }

    return 0;
}