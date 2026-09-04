// Problem: TRUESCORE
// Platform: codechef
// Language: C​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/TRUESCORE
// Solved on: 2026-09-04T18:15:33.014Z

#include <stdio.h>

int main() {
 int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        
        int a,b,c,d;
        
        scanf("%d %d", &a, &b);
        scanf("%d %d", &c, &d);
        
        if(a>c || b>d) {
        printf("IMPOSSIBLE\n"); }
        
        else
        printf("POSSIBLE\n");
        
    } return 0;

}