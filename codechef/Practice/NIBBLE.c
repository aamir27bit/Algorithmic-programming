// Problem: NIBBLE
// Platform: codechef
// Language: C​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/NIBBLE
// Solved on: 2026-09-08T12:27:03.539Z

#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        int N;
        scanf("%d", &N);

        if (N % 4 == 0) {
            printf("Good\n");
        } else {
            printf("Not Good\n");
        }
    }

    return 0;
}