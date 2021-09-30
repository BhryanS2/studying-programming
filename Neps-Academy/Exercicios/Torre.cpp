/*
https://neps.academy/br/exercise/45
Torre
Fonte: OBI 2015 - Segunda Fase
*/
#include <bits/stdc++.h>//adiciono todas as bibliotecas d euma vez

using namespace std;//uso espaço de nomes standard

int n, y; // declaro a variavel de limite n, e a temporaria y
int v[1005]; // faco um vetor com a soma de todas as linhas
int k[1005]; // faco um vetor coma soma de todas as linhas
vector <int> r; // faco meu vector de respostas
int m[1005][1005]; // faco minha matriz com limite ate 10 elevado a 3

int ord(int a, int b) { // faco uma fun��o comum para que meu vetor seja ordenado do maior para o menor

  return a > b; // retorno a  > b
}

int main() { //declaro minha main

  cin >> n; // pego o valor de n

  for (int i = 0; i < n; i++) {  // pego os valores da matriz
    for (int j = 0; j < n; j++) {
      cin >> m[i][j];
    }
  }

  for (int i = 0; i < n; i++) { // fa�o a soma de cada linha e cada coluna
    for (int j = 0; j < n; j++) {
      v[i] += m[i][j];
      k[j] += m[i][j];
    }
  }

  for (int i = 0; i < n; i++) { //fa�o o peso de cada numero
    for (int j = 0; j < n; j++) {
      y = k[j] + v[i] - (2 * m[i][j]);
      r.push_back(y);
    }
  }


  sort(r.begin(), r.end(), ord); // ordeno meu vetor r com base na fun��o ord

  cout << r[0]; // imprimo a primeira casa do vetor r

  return 0; // termino meu cod
}
