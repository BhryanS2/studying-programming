/*
Carteira de habilitação
https://neps.academy/br/exercise/753
*/
#include <bits/stdc++.h>
using namespace std;

int ano1, ano2, idade, temp;

int main() {
  cin >> ano1 >> ano2;
  idade = abs(ano1 - ano2);
  temp = abs(idade - 18);
  cout << idade << endl;
  cout << (idade > 18 ? "Pode tirar carteira" : "Nao pode tirar carteira") << endl;
  cout << temp;
}
