/*
https://neps.academy/br/exercise/648
Quermesse
Fonte: OBI 2000 - Fase Única
*/
#include <iostream>
using namespace std;

int main() {
  int teste = 1;
  while (true) {
    // lê número de convidados
    int convidados;

    cin >> convidados;

    if (!convidados) break;

    // lê entrada e encontra solução
    int solucao = -1;
    int posicao = 1;

    while (posicao <= convidados) {
      int ingresso;
      cin >> ingresso;
      if (posicao == ingresso) {
        if (solucao != -1) cerr << "*** + de uma solucao" << endl;
        else solucao = posicao;
      }
      posicao++;
    }

    // imprime solução
    cout << "Teste " << teste << endl;
    cout << solucao << endl;
    cout << endl;

    // vai para próximo teste
    teste++;
  }
}

