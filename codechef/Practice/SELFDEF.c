// Problem: SELFDEF
// Platform: codechef
// Language: C​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/SELFDEF
// Solved on: 2026-09-23T11:09:47.125Z

#include <stdio.h>

int main() {

    int t;
    
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {

        int n;
        scanf("%d", &n);

        int count = 0;

        for (int j = 0; j < n; j++) {

            int age;
            scanf("%d", &age);

            if (age >= 10 && age <= 60)
            count++;
        }

        printf("%d\n", count);
    }

    return 0;
}