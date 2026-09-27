// Problem: SEARCHINARR
// Platform: codechef
// Language: C++​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/arrays-new/ARRAYSP01/problems/SEARCHINARR
// Solved on: 2026-09-27T15:00:11.348Z

string solve(int N, int X, const vector<int>& A) {
    
    for (int i = 0; i < N; i++) {
        
        if (A[i] == X) {
            return "YES";
        }
    }

    return "NO";
}