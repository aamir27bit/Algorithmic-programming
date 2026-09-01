// Problem: AUDIBLE
// Platform: codechef
// Language: C​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/AUDIBLE
// Solved on: 2026-09-01T14:29:08.804Z

#include <stdio.h>

int main() {
    int t;
    scanf("%d",&t);
 for(int i=0;i<t;i++) {
     int x;
     scanf("%d",&x);
        
        if (x>=67 && x<=45000) {
        printf("YES\n");
    }    
        else
        printf("NO\n");
 }

       return 0;

}

