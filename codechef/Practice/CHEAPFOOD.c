// Problem: CHEAPFOOD
// Platform: codechef
// Language: C​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/CHEAPFOOD
// Solved on: 2026-09-01T16:07:41.616Z

#include <stdio.h>

int main() {
 int t;
    scanf("%d",&t);
 
 for(int i=0;i<t;i++) {
     
     int x;
     scanf("%d",&x);

   if(x<=1000) 
    printf("100\n"); 
   else
    printf("%d\n",x/10); 
        
    }
        return 0;
 
}

