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
  int n;
  while (cin >> n)
  {
    bool pode=false;

    for (int i = 0; i * i <= n; i++)
    {
      for (int j = 0; j * j <= n; j++)
      {
        if (i * i + j * j == n)
        {
          // cout << i*i << " " << j *j << endl;
          pode = true;
          break;
        }
      }
      if (pode) break;
    }

    cout << (pode ? "YES" : "NO") << endl;
  }

  return 0;
}

// g++ exe.cpp -o exe; cat input.txt | ./exe
