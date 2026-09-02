// Problem: AVGPROBLEM
// Platform: codechef
// Language: C​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/AVGPROBLEM
// Solved on: 2026-09-02T15:44:41.208Z

#include <stdio.h>

int main() {
    int t;
    scanf("%d",&t);
        for(int i=0;i<t;i++) {
        
        float x,y,z;
        scanf("%f %f %f", &x, &y, &z);
        if( (x+y)/2 > z)
        printf("YES\n");
        else
        printf("NO\n");
        
            
        }
        
        return 0;
}

