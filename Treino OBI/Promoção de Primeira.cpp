/*
Promoção de Primeira
Fonte: OBI 2020 - Primeira Fase - A
*/

#include <bits/stdc++.h>
using namespace std;
#define MAX 50010;
typedef pair<int, int> pii;
typedef vector < pair < pii, int> > VecPair;
int TotalDeCidades, cont = 0;
VecPair ExisteCidade;

bool findinVector(int b, int e) {
  for (int i = 0; i < TotalDeCidades - 1; i++) {
    int CidadeA = ExisteCidade[i].first.first;
    int Empresa = ExisteCidade[i].second;
    if (CidadeA == b && Empresa != e) {
      cout << CidadeA << "\t" << ExisteCidade[i].first.second << "\t" << Empresa << endl;
      cont++;
      return true;
    }
  }
}

int main() {
  cin >> TotalDeCidades;
  for (int i = 0; i < TotalDeCidades - 1; i++) {
    int CidadeA, CidadeB, Empresa;//(0 para RoyalBus, 1 para ImperialBus)
    cin >> CidadeA >> CidadeB >> Empresa;
    ExisteCidade.push_back(make_pair(make_pair(CidadeA, CidadeB), Empresa));
  }


  for (int i = 0; i < TotalDeCidades - 1; i++) {
    cout << ExisteCidade[i].first.first << "\t" << ExisteCidade[i].first.second << "\t" << ExisteCidade[i].second << endl;
    findinVector(ExisteCidade[i].first.second, ExisteCidade[i].second);
    cout << endl;
  }
  cout << cont << endl;
}

//g++ "Promoção de Primeira".cpp -o "Promoção de Primeira".exe && "Promoção de Primeira".exe < input.txt

/*
*/
