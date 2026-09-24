// Problem: DECINC
// Platform: codechef
// Language: C​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/DECINC
// Solved on: 2026-09-24T17:10:39.151Z

#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    if (n % 4 == 0) 
    n = n + 1;
    
    else 
    n = n - 1;
    

    printf("%d\n", n);

    return 0;
}