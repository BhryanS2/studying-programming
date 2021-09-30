/*
Copa do Mundo (OBI 2010)
https://neps.academy/br/course/10/lesson/270
Fonte: OBI 2010 - Primeira Fase
*/
#include <bits/stdc++.h>
using namespace std;

/*
A entrada é composta de quinze linhas, cada uma contendo o resultado de um jogo.
A primeira linha contém o resultado do jogo de número 1, a segunda linha o resultado do jogo de número 2, e assim por diante.
O resultado de um jogo é representado por dois números inteiros M e N separados por um espaço em branco,
indicando respectivamente o número de gols da equipe representada à esquerda e à direita na tabela de jogos.
*/

int main() {
  queue <char> fila;

  for (char c = 'A'; c <= 'P'; c++) fila.push(c);

  for (int i = 0; i < 15; i++) {
    int a, b, ca, cb;

    ca = fila.front();
    fila.pop();
    cb = fila.front();
    fila.pop();

    cin >> a >> b;

    if (a > b) fila.push(ca);
    else fila.push(cb);
  }

  cout << (char)fila.front() << endl;

  return 0;
}
