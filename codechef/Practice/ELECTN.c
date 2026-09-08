// Problem: ELECTN
// Platform: codechef
// Language: C​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/ELECTN
// Solved on: 2026-09-08T13:30:29.234Z

#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        
        int N, X;
        
        scanf("%d %d", &N, &X);

        int count = 0;

        for (int j = 0; j < N; j++) {
            
            int age;
            
            scanf("%d", &age);

            if (age >= X) {
            count++;
            }
        }

        printf("%d\n", count);
    }

    return 0;
}