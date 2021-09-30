/*
https://neps.academy/br/exercise/681
Construindo Triângulos
Fonte: Liga de Programação 2020 - Etapa 1
*/
#include <bits/stdc++.h>
using namespace std;
const int MAX = 1e5 + 10;

int v[MAX], n, lado1, lado2, lado3;
double raiz;

int main() {

  cin >> n;

  for (int i = 1; i <= n; i++) cin >> v[i];

  sort(v + 1, v + n + 1);


  for (int i = 1; i < n - 1; i++) {
    int inicio = i + 2, fim = n, p = -1;

    while (inicio <= fim) {
      int soma = (inicio + fim) >> 1;

      if (v[i] + v[i + 1] > v[soma]) {
        p = soma;
        inicio = soma + 1;
      } else fim = soma - 1;
    }

    if (p != -1) {
      if (sqrt(1.00 * v[i] * v[i + 1] * v[p]) > raiz) {
        lado1 = v[i];
        lado2 = v[i + 1];
        lado3 = v[p];
        raiz = sqrt(1.00 * v[i] * v[i + 1] * v[p]);
      }
    }
  }

  cout << lado1 << " " << lado2 << " " << lado3 << endl;
}
