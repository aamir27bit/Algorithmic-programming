// Problem: POLTHIEF
// Platform: codechef
// Language: C​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/POLTHIEF
// Solved on: 2026-09-13T12:26:13.313Z

#include <stdio.h>
#include<stdlib.h>

int main() {

    int t;
    scanf("%d",&t);

 for(int i=0;i<t;i++) {
     
     int x,y;
     
     scanf("%d %d",&x ,&y);
     
     printf("%d\n",abs(y-x) );
     
 }
 
    return 0;
 
}

