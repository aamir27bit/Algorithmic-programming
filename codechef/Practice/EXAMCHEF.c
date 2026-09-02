// Problem: EXAMCHEF
// Platform: codechef
// Language: C​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/EXAMCHEF
// Solved on: 2026-09-02T19:13:34.031Z

#include <stdio.h>

int main() {

int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        float x,y,z;
        
        scanf("%f %f %f",&x , &y ,&z);
         
        if( (z/(x*y))*100 <= 50 )
        printf("NO\n");
        else 
        printf("YES\n");
        
}
    return 0;
}