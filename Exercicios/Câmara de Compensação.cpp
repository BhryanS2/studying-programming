/*
Câmara de Compensação
https://neps.academy/br/exercise/169
Fonte: OBI 2018 - Primeira Fase
*/
#include <bits/stdc++.h>
using namespace std;

int n, m, soma = 0, res = 0;
int saldo[1005];
int x, v, y;

int main() {

  //leio os cheques emitidos e o número de habitantes
  cin >> m >> n;

  for (int i = 0; i < m; i++) {
    //leio quem emitou, quanto foi, e para quem foi
    cin >> x >> v >> y;
    saldo[x] -= v;//a pessoa que emitiu perde dinheiro
    saldo[y] += v;//a que recebeu, ganha mais dinheiro
    soma += v;//o total de dinheiro rodado
  }

  //res recebe o valor absoluto de saldo
  for (int i = 1; i <= n; i++) res += abs(saldo[i]);

  // divido o resultado por 2
  res = res / 2;

  // se res igual a soma, impreme N senão S
  cout << (res == soma ? 'N' : 'S') << endl;

  //valor de res
  cout << res << endl;
}
