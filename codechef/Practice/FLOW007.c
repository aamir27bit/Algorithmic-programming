// Problem: FLOW007
// Platform: codechef
// Language: C​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/FLOW007
// Solved on: 2026-09-07T17:45:12.219Z

#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        int n;
        
        scanf("%d", &n);

        int reverse = 0;

        while (n > 0) {
            
            int remainder = n % 10;
            reverse = reverse * 10 + remainder;
            n = n / 10;
        }

        printf("%d\n", reverse);
    }

    return 0;
}