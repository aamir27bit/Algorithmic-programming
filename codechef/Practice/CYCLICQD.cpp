// Problem: CYCLICQD
// Platform: codechef
// Language: C++​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CYCLICQD
// Solved on: 2026-09-29T19:35:36.529Z

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int A, B, C, D;
        cin >> A >> B >> C >> D;

        if (A + C == 180 && B + D == 180)
        cout << "YES\n";
        
        else
        cout << "NO\n";
    }

    return 0;
}