// Problem: MYSERVE
// Platform: codechef
// Language: C​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/MYSERVE
// Solved on: 2026-09-22T16:54:03.125Z

#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        int p, q;
        scanf("%d %d", &p, &q);

        if ((p + q) % 4 < 2)
        printf("Alice\n");
        
        else
        printf("Bob\n");
    }

    return 0;
}