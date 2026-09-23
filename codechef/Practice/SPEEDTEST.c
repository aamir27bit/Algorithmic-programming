// Problem: SPEEDTEST
// Platform: codechef
// Language: C​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/SPEEDTEST
// Solved on: 2026-09-23T12:01:14.744Z

#include <stdio.h>

int main() {

    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {

        int a, x, b, y;
        float alice, bob;

        scanf("%d %d %d %d", &a, &x, &b, &y);

        alice = (float)a / x;
        bob = (float)b / y;

        if (alice > bob)
        printf("ALICE\n");
        
        else if (bob > alice)
        printf("BOB\n");
        
        else
        printf("EQUAL\n");
    }

    return 0;
}