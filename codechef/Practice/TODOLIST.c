// Problem: TODOLIST
// Platform: codechef
// Language: C​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/TODOLIST
// Solved on: 2026-09-06T18:26:19.795Z

#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        int n;
        scanf("%d", &n);

        int count = 0;

        for (int j = 0; j < n; j++) {
            int d;
            scanf("%d", &d);

            if (d >= 1000) {
                count++; }
        }

        printf("%d\n", count);
    }

    return 0;
}