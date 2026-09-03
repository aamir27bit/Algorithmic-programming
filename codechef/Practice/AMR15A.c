// Problem: AMR15A
// Platform: codechef
// Language: C​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/AMR15A
// Solved on: 2026-09-03T06:24:36.316Z

#include <stdio.h>

int main(void) {
    int n;
    int x;
    int even = 0;
    int odd = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &x);

        if (x % 2 == 0)
            even++;
        else
            odd++;
    }

        if (even > odd)
        printf("READY FOR BATTLE\n");
        else
        printf("NOT READY\n");

    return 0;
}