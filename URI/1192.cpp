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
  cin >> n;
  while (n--)
  {
    int a, b;
    char s;
    scanf("%d%c%d", &a, &s, &b);
    int c = s - 'a';
    bool isUpperCase = c < 0;
    if (a == b)
    {
      cout << b * a << endl;
    }
    else if (isUpperCase)
    {
      cout << b - a << endl;
    }
    else
      cout << a + b << endl;
  }
  return 0;
}

// g++ 1192.cpp -o exe; cat input.txt | ./exe
