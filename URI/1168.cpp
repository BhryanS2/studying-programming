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
  int n;
  cin >> n;
  int v[] = { 6, 2, 5, 5, 4, 5, 6, 3, 7, 6 };
  for (int i = 0; i < n; i++)
  {
    string s;
    cin >> s;
    int count = 0;
    for (int j = 0; j < s.size(); j++)
    {
      int pos = s[j] - '0';
      count += v[pos];
    }

    cout << count << " leds" << endl;

  }

  return 0;
}


//g++ 1168.cpp -o exe; cat input.txt | ./exe
