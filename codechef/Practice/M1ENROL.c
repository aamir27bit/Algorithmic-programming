// Problem: M1ENROL
// Platform: codechef
// Language: C​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/M1ENROL
// Solved on: 2026-08-31T18:09:33.285Z

#include <stdio.h>

int main() {
    int x,y,z,t,i,a=0;
    scanf("%d",&t);
for ( int i=0 ;i<t;i++)
    {
scanf("%d%d", &x, &y);
z=(y-x);
if(z>0)
printf("%d\n",z); 
else
printf("%d\n",a);
        
    }
return 0;
}

