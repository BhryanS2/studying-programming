#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> PII;
typedef long long int LLI;
typedef unsigned long long int ULLI;

#define REP(i,n) for (int i=0; i<(n); ++i)
#define FOR(var,pocz,koniec) for (int var=(pocz); var<=(koniec); ++var)
#define FORD(var,pocz,koniec) for (int var=(pocz); var>=(koniec); --var)
#define PB push_back
#define MP(a,b) make_pair(a,b)
#define F first
#define S second

#define MAX 100000000

int main() {
  string s;
  while (cin >> s) {
    queue<char> q;
    int n = s.size();
    REP(i, n) {
      if (s[i] == '(') {
        q.push(s[i]);
      }
      else if (s[i] == ')') {
        if (!q.empty() && q.front() == '(') {
          q.pop();
        }
        else {
          q.push(s[i]);
        }
      }
    }
    if (q.empty()) cout << "correct" << endl;
    else cout << "incorrect" << endl;
  }
  return 0;
}


//g++ 1068.cpp -o exe;cat input.txt | ./exe
