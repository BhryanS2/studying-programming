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
  vector<int> dias_no_mes = { 0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
  
  const int dia_natal = 360;

  int mes, dia;

  while (cin >> mes >> dia) {
    if (mes == 12 && dia == 25) {
      cout << "E natal!" << endl;
    }
    else if (mes == 12 && dia == 24) {
      cout << "E vespera de natal!" << endl;
    }
    else if (mes == 12 && dia > 25) {
      cout << "Ja passou!" << endl;
    }
    else {
      int dias_corridos = 0;
      
      for (int i = 1; i < mes; ++i) {
        dias_corridos += dias_no_mes[i];
      }
      
      dias_corridos += dia;

      int dias_faltando = dia_natal - dias_corridos;
      cout << "Faltam " << dias_faltando << " dias para o natal!" << endl;
    }
  }

  return 0;
}



//g++ 2139.cpp -o exe;cat input.txt | ./exe
