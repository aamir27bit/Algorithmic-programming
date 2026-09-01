// Problem: CGYM
// Platform: codechef
// Language: C​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/CGYM
// Solved on: 2026-09-01T18:13:40.787Z

#include <stdio.h>

int main() {
    int t;
    scanf("%d",&t);
    
 for(int i=0;i<t;i++) {
     int x,y,z;
     scanf("%d %d %d",&x ,&y ,&z);
        
        if(x-z>0) {
        printf("0\n"); }
        
    else if ( (x+y)<=z ) {
        printf("2\n"); }
        
    else 
     printf("1\n");
        
    }
     
     return 0;
 }




