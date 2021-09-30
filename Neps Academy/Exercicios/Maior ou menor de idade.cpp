/*
Maior ou menor de idade
https://neps.academy/br/exercise/752
*/
#include <bits/stdc++.h>
using namespace std;

int ano1, ano2, idade;

int main() {
  cin >> ano1 >> ano2;
  idade = abs(ano1 - ano2);
  cout << idade << endl;
  cout << (idade > 18 ? "Maior" : "Menor") << endl;
}
