/*
https://neps.academy/br/exercise/123
Atribuindo Equipes
Fonte: Maratona de Programação da SBC 2016
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c, d, somaAB, somaCD, res;

  somaAB = a > b ? a - b : b - a;
  somaCD = c > d ? c - d : d - c;

  res = somaAB > somaCD ? somaAB - somaCD : somaCD - somaAB;

  cout << res << endl;
}
