/*
https://judge.beecrowd.com/pt/problems/view/2318
Quadrado Mágico (OBI 2006)
Fonte: OBI 2006 - Segunda Fase
*/
#include <bits/stdc++.h>
using namespace std;

int m[3][3], soma;

void logica() {

  for (int i = 0; i < 3; i++) {
    if ((m[i][0] == 0) + (m[i][1] == 0) + (m[i][2] == 0) == 0) {
      soma = m[i][0] + m[i][1] + m[i][2];
    }
  }

  for (int j = 0; j < 3; j++) {
    if ((m[0][j] == 0) + (m[1][j] == 0) + (m[2][j] == 0) == 0) {
      soma = m[0][j] + m[1][j] + m[2][j];
    }
  }

  if ((m[0][0] == 0) + (m[1][1] == 0) + (m[2][2] == 0) == 0) {
    soma = m[0][0] + m[1][1] + m[2][2];
  }

  if ((m[0][2] == 0) + (m[1][1] == 0) + (m[2][0] == 0) == 0) {
    soma = m[0][2] + m[1][1] + m[2][0];
  }

  if (soma == 0) {
    for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++) {
        soma += m[i][j];
      }
    }
    soma /= 2;
  }

  for (int tentativas = 0; tentativas < 3; tentativas++) {
    for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++) {

        /*Testa mesma linha*/
        if ((m[i][j] == 0) && (m[i][0] == 0) + (m[i][1] == 0) + (m[i][2] == 0) == 1) {
          m[i][j] = soma - m[i][0] - m[i][1] - m[i][2];
        }

        /*Testa mesma coluna*/
        if ((m[i][j] == 0) && (m[0][j] == 0) + (m[1][j] == 0) + (m[2][j] == 0) == 1) {
          m[i][j] = soma - m[0][j] - m[1][j] - m[2][j];
        }
      }
    }
  }

}

int main() {

  for (int i = 0; i < 3; i++)
    for (int j = 0; j < 3; j++) cin >> m[i][j];

  logica();
  for (int i = 0; i < 3; i++) {

    bool espaco = true;
    for (int j = 0; j < 3; j++) {
      if (espaco) {
        cout << m[i][j];
        espaco = false;
      }
      else {
        cout << " " << m[i][j];
      }
    }
    cout << endl;
  }

  return 0;
}
