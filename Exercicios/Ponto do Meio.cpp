/*
Ponto do Meio
https://neps.academy/br/exercise/474
Fonte: OBI 2019 - Segunda Fase
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long int li;

li f(int x) {
  //se x igual  a zero retorne 2
  if (x == 0) return 2;
  //senão return a expreção f(x)=2∗f(x−1)−1
  return 2 * f(x - 1) - 1;
}

int main() {
  int n;

  cin >> n;

  li resposta = f(n);

  //é necessário ainda obter a área do quadrado
  resposta *= resposta;

  cout << resposta << "\n";
}
