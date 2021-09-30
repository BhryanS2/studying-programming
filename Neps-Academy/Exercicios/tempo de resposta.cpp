/*
https://neps.academy/br/exercise/1483
Tempo de Resposta
OBI 2021
Resolvido
*/
#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> PII;

#define REP(i,n) for (int i=0; i<(n); ++i)
#define forMap(Map, ItName) for(map<int, pair<int, char> >::iterator ItName = Map.begin(); ItName != Map.end(); ItName++)
#define F first
#define S second

int main() {
  map<int, pair<int, char> > ans;
  int Demora = 1, n, i, amigo;
  char TypeMessage;
  cin >> n;
  REP(i, n) {
    cin >> TypeMessage >> amigo;
    if (TypeMessage == 'T') Demora = amigo;
    else {
      forMap(ans, it) if (it->S.S == 'R') it->S.F += Demora;
      ans[amigo].S = TypeMessage == 'R' ? 'R' : 'E';
      ans[amigo].F += 0;
      Demora = 1;
    }
  }

  forMap(ans, it) {
    cout << it->F << " " << (it->S.S == 'E' ? it->S.F : -1) << endl;
  }

  return 0;
}
//g++ "tempo de resposta".cpp -o exe && exe < input.txt
