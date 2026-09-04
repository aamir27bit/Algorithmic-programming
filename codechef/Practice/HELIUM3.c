// Problem: HELIUM3
// Platform: codechef
// Language: C​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/HELIUM3
// Solved on: 2026-09-04T07:37:21.919Z

#include <stdio.h>

int main() {

    int t;
    scanf("%d", &t);

    for(int i = 0; i < t; i++) {

        int a, b, x, y;
        scanf("%d %d %d %d", &a, &b, &x, &y);

        if(x * y >= a * b) {
            printf("Yes\n");
        }
        else {
            printf("No\n");
        }
    }

    return 0;
}