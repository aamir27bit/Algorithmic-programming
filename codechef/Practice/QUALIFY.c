// Problem: QUALIFY
// Platform: codechef
// Language: C​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/QUALIFY
// Solved on: 2026-09-08T12:27:36.308Z

#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        int X, A, B;
        scanf("%d %d %d", &X, &A, &B);

        if (A + 2 * B >= X) 
        printf("Qualify\n");
        else
        printf("NotQualify\n");
        }
    }

    return 0;
}
