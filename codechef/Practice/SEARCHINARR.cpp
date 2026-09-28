// Problem: SEARCHINARR
// Platform: codechef
// Language: C++​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/arrays-new/ARRAYSP01/problems/SEARCHINARR
// Solved on: 2026-09-28T15:32:27.878Z

string solve(int N, int X, const vector<int>& A) {
    
    for (int i = 0; i < N; i++) {
        
        if (A[i] == X) {
            return "YES";
        }
    }

    return "NO";
}