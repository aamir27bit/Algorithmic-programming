// Problem: CHEFCAND
// Platform: codechef
// Language: C​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CHEFCAND
// Solved on: 2026-09-04T17:56:23.234Z

#include <stdio.h>

int main() {
    int t;
    
    scanf("%d",&t);

for (int i = 0; i < t; i++) {
    int x, y, count = 0;

    scanf("%d %d", &x, &y);

    while (y < x) {
        y = y + 4;
        count++;
    }

    printf("%d\n", count);
}


}

