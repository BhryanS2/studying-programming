/*
OBI 2021
Fase 1
cifra
*/
#include <bits/stdc++.h>
using namespace std;
string palavra, novapalavra;
map<char, string> resposta;

void FillAns() {
  resposta['a'] = "a";
  resposta['b'] = "bac";
  resposta['c'] = "cad";
  resposta['d'] = "def";
  resposta['e'] = "e";
  resposta['f'] = "feg";
  resposta['g'] = "geh";
  resposta['h'] = "hij";
  resposta['i'] = "i";
  resposta['j'] = "jik";
  resposta['k'] = "kil";
  resposta['l'] = "lim";
  resposta['m'] = "mon";
  resposta['n'] = "nop";
  resposta['o'] = "o";
  resposta['p'] = "poq";
  resposta['q'] = "qor";
  resposta['r'] = "ros";
  resposta['s'] = "sut";
  resposta['t'] = "tuv";
  resposta['u'] = "u";
  resposta['v'] = "vux";
  resposta['x'] = "xuz";
  resposta['z'] = "zuz";
}

int main() {
  ios_base::sync_with_stdio(0);cin.tie(0);

  FillAns();
  cin >> palavra;
  novapalavra = "";
  for (int i = 0; i < palavra.size(); i++) {
    char letra = palavra[i];
    novapalavra += resposta[letra];
  }

  cout << novapalavra << endl;
  return 0;
}

//g++ cifra.cpp -o cifra.exe && cifra.exe < input.txt
