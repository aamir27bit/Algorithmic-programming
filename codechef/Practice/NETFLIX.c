// Problem: NETFLIX
// Platform: codechef
// Language: C​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/NETFLIX
// Solved on: 2026-09-02T13:45:25.883Z

#include <stdio.h>

int main() {
    int t;
    scanf("%d",&t);
            
     for(int i=0;i<t;i++) {
     int a,b,c,d;
     
     scanf("%d %d %d %d",&a, &b, &c, &d);
        
        if(a+b>=d || a+c>=d || b+c>=d)
        printf("YES\n");
        else
        printf("NO\n");
 }
         
        return 0;
}

