// Problem: FLOORS
// Platform: codechef
// Language: C​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/FLOORS
// Solved on: 2026-09-23T11:29:21.935Z

#include <stdio.h>
#include <stdlib.h>

int main() {

    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {

        int x, y, floorX, floorY, z;

        scanf("%d %d", &x, &y);

        floorX = (x + 9) / 10;
        floorY = (y + 9) / 10;

        z = abs(floorX - floorY);

        printf("%d\n", z);
    }

    return 0;
}