// Problem: CRICUP
// Platform: codechef
// Language: C​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CRICUP
// Solved on: 2026-09-23T11:16:17.153Z

#include <stdio.h>
#include <stdlib.h>

int main() {

    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {

        int x, y, d;
        
        scanf("%d %d %d", &x, &y, &d);

        if (abs(x - y) <= d)
        printf("YES\n");
        
        else
        printf("NO\n");
    }

    return 0;
}