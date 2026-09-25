// Problem: LCPPAS171
// Platform: codechef
// Language: C++​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/cpp/LPCPAS06/problems/LCPPAS171
// Solved on: 2026-09-25T17:37:14.986Z

#include <iostream>
using namespace std;

int main() {

    int a, b, c;

    cin >> a >> b >> c;

    if (a == b && b == c) 
    cout << "Equilateral";
    

    else if (a != b && b != c && a != c) 
    cout << "Scalene";
    

    else 
    cout << "Isosceles";
    

    return 0;
}