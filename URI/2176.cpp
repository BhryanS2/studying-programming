/*

*/
#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> PII;

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
  cin >> s;
  bool par = false;
  int count = 0;
  for (int i = 0; i < s.size(); i++)
  {
    if(s[i] == '1') count++;
  }
  if(count % 2 == 0) s += '0';
  else s += '1';

  cout << s << endl;

  return 0;
}


//g++ 2176.cpp -o exe; cat input.txt | ./exe
