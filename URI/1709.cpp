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

long long mmc(long long a, long long b)
{
  return (a / __gcd(a, b)) * b;
}

int embaralha(int p)
{
  int n = p / 2;
  vector<int> perm(p);

  for (int i = 0; i < p; ++i)
  {
    if (i % 2 == 0)
      perm[i] = n + i / 2;
    else
      perm[i] = (i - 1) / 2;

    cout << perm[i] << " ";
  }

  cout << endl;

  vector<bool> visited(p, false);
  long long result = 1;

  for (int i = 0; i < p; i++)
  {
    if (!visited[i])
    {
      int count = 0;
      int j = i;
      // cout << "J: " << j << endl;
      while (!visited[j])
      {
        visited[j] = true;
        j = perm[j];
        count++;
        // cout << "count: " << count << "\tpermutacao: " << perm[j] << ' ';
      }
      // cout << endl;
      result = mmc(result, count);
    }
  }

  return result;
}

int main()
{
  int p;
  cin >> p;
  cout << embaralha(p) << endl;
  return 0;
}

// g++ exe.cpp -o exe; cat input.txt | ./exe
