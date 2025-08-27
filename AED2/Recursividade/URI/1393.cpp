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

int memo[61];

int fib_memo(int n)
{
  if (n <= 1)
    return 1;
  if (memo[n] != -1)
  {
    return memo[n];
  }
  memo[n] = fib_memo(n - 1) + fib_memo(n - 2);
  return memo[n];
}

int fib(int n, int x, int y)
{
  if (n == 0)
  {
    return y;
  }
  if (n == 1)
  {
    return x;
  }

  return fib(n - 1, x + y, x);
}


int main()
{
  memset(memo, -1, sizeof(memo));
  int n;
  while (cin >> n && n != 0)
  {
    cout << fib(n, 1, 1) << endl;
    // cout << fib_memo(n) << endl;
  }
  return 0;
}

// g++ 1393.cpp -o exe; cat input.txt | ./exe
