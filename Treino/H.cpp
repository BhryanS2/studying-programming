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
  int dias;
  vector<double> diasMaisRapidos;
  while (cin >> dias && dias != EOF) {
    vector<double> temposObtidos;
    for (int i = 0; i < dias; ++i) {
      double n1;
      cin >> n1;
      temposObtidos.PB(n1);
    }
    sort(temposObtidos.begin(), temposObtidos.end());
    diasMaisRapidos.PB(temposObtidos[0]);
    // cout << temposObtidos[0] << endl;
  }

  for (int i = 0; i < diasMaisRapidos.size(); ++i) {
    cout << diasMaisRapidos[i] << endl;
  }
  return 0;
}


//g++ exe.cpp -o exe && exe < input.txt
