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
  int a, b, c;
  cin >> a >> b >> c;
  if (a > b)
    swap(a, b);
  if (b > c)
    swap(b, c);
  if (a > b)
    swap(a, b);

  if (c >= a + b) {
    cout << "Invalido" << endl;
    return 0;
  }
  cout << "Valido-";
  if (a == b && b == c) cout << "Equilatero" << endl;
  else if (a == b || b == c || a == c) cout << "Isoceles" << endl;
  else cout << "Escaleno" << endl;
  cout << "Retangulo: ";
  if (c*c == b*b + a*a) cout << "S" << endl;
  else cout << "N" << endl;
  return 0;
}

// g++ 2313.cpp -o exe; cat input.txt | ./exe
