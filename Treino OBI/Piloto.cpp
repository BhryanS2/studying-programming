/*
Piloto Automático
https://neps.academy/br/exercise/890
Fonte: OBI 2020 - Primeira Fase - A
*/
#include<bits/stdc++.h>
using namespace std;

int main() {
  int A, B, C, resposta;
  cin >> A >> B >> C;

  if ((B - A) < (C - B)) {
    //acelerado
    resposta = 1;
  }
  else if ((B - A) > (C - B)) {
    //desesacelerar
    resposta = -1;
  } else {
    //manter
    resposta = 0;
  }
  cout << resposta << endl;
}

//g++ piloto.cpp -o piloto.exe && piloto.exe < input.txt
