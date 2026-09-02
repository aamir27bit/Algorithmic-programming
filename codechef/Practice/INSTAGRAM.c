// Problem: INSTAGRAM
// Platform: codechef
// Language: C​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/INSTAGRAM
// Solved on: 2026-09-02T14:07:29.972Z

#include <stdio.h>

int main() {
	                          // following  follower
	int t;
	scanf("%d",&t);
	 
	    for(int i=0;i<t;i++) {
	        float x,y;
	        
	        scanf("%f %f",&x, &y);
	        if(x/10 > y) 
	        printf("YES\n");
	        else 
	        printf("NO\n");
	    }
	    
           return 0;
}

