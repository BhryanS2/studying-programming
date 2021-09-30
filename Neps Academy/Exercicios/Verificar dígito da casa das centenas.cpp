/*
https://neps.academy/br/exercise/759
Verificar dígito da casa das centenas
*/
#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, aux;
  cin >> n;
  if (n < 100 || n > 999) cout << "Valor invalido" << endl;
  else {
    aux = n;
    n /= 100;

    cout << n << endl;
    cout << (aux % 2 == 0? "Par" : "Impar") << endl;
  }

  return 0;
}
