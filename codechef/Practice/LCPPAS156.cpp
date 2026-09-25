// Problem: LCPPAS156
// Platform: codechef
// Language: C++​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/cpp/LPCPAS06/problems/LCPPAS156
// Solved on: 2026-09-25T17:20:42.667Z

#include <iostream>
using namespace std;
#include<string>


int main() {

    string s1;
    string s2;

  cin>>s1>> s2;
  
  int x,y;
  cin>>x>> y;
  
  if(x<y)
  cout<< s2;
  
  else if(x>y)
  cout<< s1;
  
  else
  cout<< "equal";
  
}
