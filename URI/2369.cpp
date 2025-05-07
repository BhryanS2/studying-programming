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
  int n, total = 0;
  cin >> n;
  if (n < 11)
  {
    cout << "7" << endl;
    return 0;
  }
  else if (n < 31)
  {
    total = 7;
    n -= 10;
    total += n;
  }
  else if (n < 100)
  {
    total = 7;
    n -= 10;
    total += 20;
    n -= 20;
    total += n * 2;
  }
  else
  {
    total = 7;
    n -= 10;
    total += 20;
    n -= 20;
    total += 140;
    n -= 70;
    total += n * 5;
  }

  cout << total << endl;

  return 0;
}

// g++ 2369.cpp -o exe; cat input.txt | ./exe
