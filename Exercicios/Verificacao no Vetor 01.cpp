/*
Verificação no Vetor 01
https://neps.academy/br/exercise/196
*/
#include <bits/stdc++.h>
using namespace std;

int n, q;
set<int> List;

int main() {
  cin >> n;

  //lendo:lista
  for (int i = 0; i < n; i++) {
    int temp;
    cin >> temp;
    List.insert(temp);
  }

  cin >> q;
  //lendo:consulta
  for (int i = 0; i < q; i++) {
    int temp;
    cin >> temp;
    if(List.find(temp) != List.end()) cout << "Sim" <<endl;
    else cout << "Nao" <<endl;
  }
}
