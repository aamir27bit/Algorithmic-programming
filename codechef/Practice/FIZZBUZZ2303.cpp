// Problem: FIZZBUZZ2303
// Platform: codechef
// Language: C++​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/FIZZBUZZ2303
// Solved on: 2026-10-02T13:05:19.859Z

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        cout << N * (N - 1) << endl;
    }

    return 0;
}