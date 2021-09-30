/*
Revisão de Contrato
https://neps.academy/br/exercise/238
*/
#include <bits/stdc++.h>
using namespace std;

string TirarDigito(string* str, char* erro) {
  string newString, s = *str;
  int cont = 0;

  //verifico onde tem o erro e tiro ele da string
  for (int i = 0; i < s.size(); i++)
    if (s[i] != *erro) newString += s[i];

  //vou contando os zeros
  for (int i = 0; i < newString.size(); i++)
    if (newString[i] == '0') cont++;
  //se a string fou só 0 ou não tiver nada, ela recebe 0
  if (!newString.size() || cont == newString.size())  newString = '0';

  return newString;
}

int main() {
  string str;
  char erro;

  while ((cin >> erro >> str) && erro != '0') {
    cout << TirarDigito(&str, &erro) << endl;
  }

}
