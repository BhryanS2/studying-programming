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
  int m, n;
  while (cin >> n >> m && m != 0 && n != 0)
  {
    int v[n + 1];

    memset(v, 0, sizeof(v)); // zerei todos
    for (int i = 0; i < m; i++)
    {
      int x;
      cin >> x;
      v[x]++;
    }
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
      if (v[i] > 1) count++;
    }

    cout << count  << endl;
  }

  return 0;
}

// g++ 1318.cpp -o exe; cat input.txt | ./exe
