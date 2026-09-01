// Problem: KITCHENTIME
// Platform: codechef
// Language: C​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/KITCHENTIME
// Solved on: 2026-09-01T08:35:37.146Z

#include <stdio.h>

int main() {
 int t;
 
 scanf("%d",&t);
 
 for(int i=0;i<t;i++){
 
 int x,y;
     scanf("%d %d", &x , &y);
     printf("%d\n",y-x);
 
     
 }
     return 0;
}

