// Problem: OFFICE
// Platform: codechef
// Language: C​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/OFFICE
// Solved on: 2026-09-03T05:08:05.109Z

#include <stdio.h>

int main() {
	
	int t;
	scanf("%d",&t);
	
	for(int i=0;i<t;i++) {
	    int x,y;
	    
	    scanf("%d %d",&x , &y);
	    
	    x=(x*4)+y;
	    
	    printf("%d\n",x);
	   
	}
	
	    return 0;
}

