// Problem: LCPPAS162
// Platform: codechef
// Language: C++​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/cpp/LPCPAS11/problems/LCPPAS162
// Solved on: 2026-09-25T19:12:02.264Z

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int sum = 0;
    int product = 1;

    while (n > 0) {
        int digit = n % 10;

        sum = sum + digit;
        product = product * digit;

        n = n / 10;
    }

    cout << sum << " " << product;

    return 0;
}