#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> PII;
typedef long long int LLI;
typedef unsigned long long int ULLI;

#define REP(i,n) for (int i=0; i<(n); ++i)
#define FOR(var,pocz,koniec) for (int var=(pocz); var<=(koniec); ++var)
#define FORD(var,pocz,koniec) for (int var=(pocz); var>=(koniec); --var)
#define PB push_back
#define MP(a,b) make_pair(a,b)
#define F first
#define S second

#define MAX 100000000

int main() {
  int apostados[100], sorteados[100];
  for (int i = 0; i < 6; i++)
  {
    cin >> apostados[i];
  }
  for (int i = 0; i < 6; i++)
  {
    cin >> sorteados[i];
  }

  sort(apostados, apostados + 6);
  sort(sorteados, sorteados + 6);
  int acertos = 0;
  for (int i = 0; i < 6; i++)
  {
    for (int j = 0; j < 6; j++)
    {
      if (apostados[i] == sorteados[j])
      {
        acertos++;
        break;
      }
    }
  }

  if (acertos == 6)
    cout << "sena" << endl;
  else if (acertos == 5)
    cout << "quina" << endl;
  else if (acertos == 4)
    cout << "quadra" << endl;
  else if (acertos == 3)
    cout << "terno" << endl;
  else
    cout << "azar" << endl;

  return 0;
}


//g++ 2473.cpp -o exe;cat input.txt | ./exe
