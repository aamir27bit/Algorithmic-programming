// Problem: UWCOI20A
// Platform: codechef
// Language: C++​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/arrays-new/ARRAYSP01/problems/UWCOI20A
// Solved on: 2026-09-28T16:01:39.701Z

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        
        int N;
        
        cin >> N;

        int largest = 0;

        for (int i = 0; i < N; i++) {
           
            int x;
            cin >> x;

            if (x > largest) 
            largest = x;
            
        }

        cout << largest << endl;
    }

    return 0;
}