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
  int peridos, count = 1;
  cin >> peridos;
  while (peridos--) {
    int n;
    cin >> n;
    vector<int> v(n);
    int max_nota = -1;
    for(int i = 0; i < n; i++) {
      cin >> v[i];
      if (v[i] > max_nota) {
        max_nota = v[i];
      }
    }

    int max_comprimento = 0;
    int comprimento_atual = 0;
    for(int i = 0; i < n; i++) {
      if (v[i] == max_nota) {
        comprimento_atual++;
      } else {
        if (comprimento_atual > max_comprimento) {
          max_comprimento = comprimento_atual;
        }
        comprimento_atual = 0;
      }
    }

    if (comprimento_atual > max_comprimento) {
      max_comprimento = comprimento_atual;
    }

    cout <<  "Caso #" << count << ": " << max_comprimento << endl;
    count++;
  }

  return 0;
}


//g++ 1779.cpp -o exe;cat input.txt | ./exe
