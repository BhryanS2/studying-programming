/*
https://neps.academy/br/exercise/248
Dentista
Fonte: OBI 2010 - Segunda Fase
*/
#include <bits/stdc++.h>
using namespace std;

struct consulta {
  int inicio, fim;
};

int ord(consulta a, consulta b) {
  return a.fim < b.fim;
}

int n, res, disponivel;

int main() {
  cin >> n;
  consulta consultas[n];

  for(int  i = 0; i < n; i++) cin >> consultas[i].inicio >> consultas[i].fim;

  sort(consultas, consultas + n, ord);

  for(int i = 0; i < n; i++){
    if(consultas[i].inicio >= disponivel) {
      res++;
      disponivel = consultas[i].fim;
    }
  }

  cout << res << endl;
}
