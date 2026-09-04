// Problem: TRAVELFAST
// Platform: codechef
// Language: C​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/TRAVELFAST
// Solved on: 2026-09-04T17:59:22.264Z

#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        int x, y;
        scanf("%d %d", &x, &y);

        if (x < y) 
            printf("BIKE\n");
        
        else if (x > y) 
            printf("CAR\n");
        
        else 
            printf("SAME\n");
        
    }

    return 0;
}