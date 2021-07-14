#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define f first
#define s second

int main() {
  ios_base::sync_with_stdio(0);cin.tie(0);
  int capacidade, num_trem_para;
  cin >> capacidade >> num_trem_para;
  /*

verificando se a entrada é inconsistente, ou seja,
- a cada vez que o número de pessoas no trem não excedeu a capacidade
- nem ficou abaixo de 0
- nenhum passageiro esperou em vão.
- O trem deve começar e terminar a viagem vazio, em particular os passageiros não devem esperar pelo trem na última estação.
  */

  bool isPossible = true;
  int pessoas = 0;

  for (int i = 0; i < num_trem_para; i++) {
    int sai_trem, entram_trem, ficou_estacao;
    cin >> sai_trem >> entram_trem >> ficou_estacao;
    pessoas += entram_trem;
    if(sai_trem) {
      if(sai_trem > 0 && pessoas == 0) isPossible = false;
      else pessoas -= sai_trem;
    }

    if(pessoas > capacidade ) {
      isPossible = false;
    }

    if(ficou_estacao && pessoas < capacidade) {
      isPossible = false;
    }

    if(i + 1 == num_trem_para) {
      if(pessoas != 0) isPossible = false;
    }
  }

  cout << (isPossible ? "possible" : "impossible") << endl;
  return 0;
}
//g++ exe1.cpp -o exe1 && exe1 < input.txt
