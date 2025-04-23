/*
beecrowd | 1035
Fórmula de Bhaskara
https://www.beecrowd.com.br/judge/pt/problems/view/1035
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

  int a, b, c, d;
  cin >> a >> b >> c >> d;
  bool BmaiorC = b > c;
  bool DmaiorA = d > a;
  int somaCD = c + d;
  int somaAB = a + b;
  if (BmaiorC && DmaiorA && somaCD > somaAB && c >= 0 && d >= 0 && a % 2 == 0) {
    cout << "Valores aceitos" << endl;
  } else {
    cout << "Valores nao aceitos" << endl;
  }


  return 0;
}


//g++ 1035.cpp -o exe; cat input.txt | ./exe
