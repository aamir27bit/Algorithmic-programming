// Problem: WATERFILLING
// Platform: codechef
// Language: C​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/WATERFILLING
// Solved on: 2026-09-03T10:11:53.112Z

#include <stdio.h>

int main() {
 int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        
    int x,y,z;
    scanf("%d %d %d", &x, &y ,&z);
    if(x+y+z>=2)
    printf("not now\n");
    else 
    printf("water filling time\n");

}
    return 0;
}