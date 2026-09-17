// Problem: CHEFBOTTLE
// Platform: codechef
// Language: C​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CHEFBOTTLE
// Solved on: 2026-09-17T18:07:58.242Z

#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        
        int n, x, k;
        
        scanf("%d %d %d", &n, &x, &k);

        int bottles = k / x;

        if (bottles > n) {
            bottles = n;
        }

        printf("%d\n", bottles);
    }

    return 0;
}