// Problem: MINCARS
// Platform: codechef
// Language: C​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/MINCARS
// Solved on: 2026-09-09T11:16:51.042Z

#include <stdio.h>

int main() {
int t;
    
    scanf("%d",&t);
    
    for(int i=0;i<t;i++) {
    int n;   
        
        scanf("%d",&n);
        
        n = (n+3)/4;
    
    printf("%d\n",n);
    
}
  return 0;
  
} 
