/*
https://neps.academy/br/exercise/758
Quadrado ou retângulo
*/
#include <bits/stdc++.h>
using namespace std;

int base, altura;
int perimetro;

int main() {
  cin >> base >> altura;
  perimetro = (base * 2) + (altura * 2);
  cout << perimetro << endl;
  cout << (base == altura ? "Quadrado" : "Retangulo") << endl;
}
