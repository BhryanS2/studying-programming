/*
Zero para Cancelar
https://neps.academy/br/exercise/1486
OBI 2021
Nível 2
*/

#include <bits/stdc++.h>
using namespace std;

vector <int> vec;

int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int num;
    cin >> num;
    if (num == 0) vec.pop_back();
    else vec.push_back(num);
  }
  int soma = 0;
  for (int i = 0; i < vec.size(); i++) {
    soma += vec[i];
  }
  cout << soma << endl;
  return 0;
}
//g++ exercicio3.cpp -o exercicio3.exe && exercicio3.exe < input.txt
