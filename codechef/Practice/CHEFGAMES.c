// Problem: CHEFGAMES
// Platform: codechef
// Language: C​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CHEFGAMES
// Solved on: 2026-09-03T18:51:33.188Z

#include <stdio.h>

int main() {

    int t;
    scanf("%d",&t);

    for(int i=0;i<t;i++) {
    int x,a,b,c,d;
    
    scanf("%d %d %d %d", &a, &b , &c, &d);
    
    x=a+b+c+d;
    
    if(x==0)
    printf("IN\n");
    
    else 
    printf("OUT\n");
}

    return 0;
    
}    