// Problem: BLACKJACK
// Platform: codechef
// Language: C​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/BLACKJACK
// Solved on: 2026-09-20T13:38:22.979Z

#include <stdio.h>

int main() {
    int t;
    scanf("%d",&t);
    
    for(int i=0;i<t;i++){
    
    int x,y,z;
    scanf("%d %d",&x , &y );
    
    z = 21 - (x+y);
    
    if(z>=1 && z<=10)
    printf("%d\n",z);
    
    else
    printf("-1\n");
}    

   return 0;
}

