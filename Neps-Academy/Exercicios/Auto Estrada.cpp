/*
Auto Estrada
https://neps.academy/br/exercise/240
Fonte: OBI 2008 - Segunda Fase
*/
#include <bits/stdc++.h>
using namespace std;

/*
P - Pista, trecho em linha reta sem curvas ou saídas. Deve-se instalar um painel de cada lado da auto estrada.

C - Curva, trecho em curva de 90 graus na auto estrada. Deve-se instalar dois painéis de concreto do lado externo da curva; o outro lado fica sem painel instalado.

A - Acesso, trecho em linha reta no qual existe uma entrada ou uma saída a partir de um dos lados da auto estrada (mas não do outro). Deve-se instalar um painel no lado onde não existe o acesso.

D - Duplo acesso, trecho em linha reta no qual existem dois acessos (entradas ou saidas, em qualquer combinação possível), um de cada lado da rodovia. Nenhum painel deve ser instalado nesse bloco da auto estrada.
*/

void verify(char* str, int *cont) {
  switch (*str) {
    case 'A':
      *cont += 1;
      break;
    case 'P':
      *cont += 2;
      break;
    case 'D':
      *cont += 0;
      break;
    case 'C':
      *cont += 2;
      break;
    default:
      break;
  }
}

int main() {
  string str;
  char s;
  int n, cont = 0;

  cin >> n;
  cin >> str;

  for (int i = 0; i < n; i++) {
    s = str[i];
    verify(&s, &cont);
  }

  cout << cont << endl;
}
