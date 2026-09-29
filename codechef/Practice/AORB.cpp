// Problem: AORB
// Platform: codechef
// Language: C++​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/AORB
// Solved on: 2026-09-29T11:44:28.888Z

#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        
        int x, y;
        
        cin >> x >> y;

        int f = 500 - (x * 2) + 1000 - ((x + y) * 4);
        int s = 1000 - (y * 4) + 500 - ((x + y) * 2);

        if (f > s)
        cout << f << endl;
        
        else
        cout << s << endl;
    }

    return 0;
}