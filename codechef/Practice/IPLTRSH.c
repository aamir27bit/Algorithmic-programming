// Problem: IPLTRSH
// Platform: codechef
// Language: C​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/IPLTRSH
// Solved on: 2026-09-01T08:59:32.388Z

#include <stdio.h>

int main() {
	 int t;
	 scanf("%d",&t);
	 
	 for(int i=0;i<t;i++) {
	 int x,y;
	 scanf("%d %d" ,&x, &y);
 if (x>y) {
	  printf("%d\n",x-y);
	  } else 
	    printf("0\n"); 
	 
   }
   return 0;
}
