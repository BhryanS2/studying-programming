/*
beecrowd | 1115
Quadrante
https://www.beecrowd.com.br/judge/pt/problems/view/1115
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
  int n, menor=10^5, pos=-1;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    if (x < menor){
      menor = x;
      pos=i;
    }
  }

  cout << "Menor valor: " << menor << endl;
  cout << "Posicao: " << pos << endl;

  return 0;
}


//g++ 1180.cpp -o exe; ./exe
