/*

*/
#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> PII;

#define REP(i, n) for (int i = 0; i < (n); ++i)
#define FOR(var, pocz, koniec) for (int var = (pocz); var <= (koniec); ++var)
#define FORD(var, pocz, koniec) for (int var = (pocz); var >= (koniec); --var)
#define PB push_back
#define MP(a, b) make_pair(a, b)
#define F first
#define S second

#define MAX 100000000

int main()
{
  int n, count = 0;
  string s;
  int i = 0;
  while (getline(cin, s))
  {
    if (!(cin >> n))
      break;
    cin.ignore();
    count += n;
    i++;
  }

  cout << fixed << setprecision(1) << count * 1.0 / i << endl;
  return 0;
}

// g++ 1216.cpp -o exe; cat input.txt | ./exe
