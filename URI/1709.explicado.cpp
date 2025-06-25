#include <bits/stdc++.h>
using namespace std;

int main() {
  int p, n, pos_antigo, pos_atual;
  cin >> p;
  // dividimos o baralho no meio
  n = p / 2;

  // agora vou definir a carta que vou perseguir no baralho
  int posicao_alvo = 0;
  int posicao_atual_da_carta = 0;
  int numerdo_de_embaralhamento = 0;
  // vou realizar pelo menos 1 embaralhamento, portanto o do while vai fazer mais sentido, pois se fosse
  // um while, teria que inicializar a variavel numerdo_de_embaralhamento com 1, o que não é necessário
  // e a condição de parada é que, enquanto a posição atual da carta for diferente da posição que ele começou,
  // ou seja, a posição alvo, eu vou continuar embaralhando.
  do
  {
    numerdo_de_embaralhamento++;
    // se a carta estiver na primeira metade do baralho, devo então fazer ela andar 2 vezes a posição dela + 1
    /**
    Por exemplo, a entrada é 6, os embaralhamentos são:
    1: 1 2 3 4 5 6 - Inicio
    2: 4 1 5 2 6 3
    3: 2 4 6 1 3 5
    4: 1 2 3 4 5 6 - Voltou ao início

    Note o 1 se movimenta de 0 para 1, ou seja, 0 + 1 = 1, e depois de 1 para 3, ou seja, 1 + 2 = 3.
    Então ele está andando 2 vezes a posição dele + 1, ou seja, 2 * posicao_atual_da_carta + 1.
    
    Mas depois da metade do baralho a logica muda, observe o 4, ele se movimenta de 3 para 0, ou seja, 3 - 3 = 0, e depois de 0 para 1, 2 * posicao_atual_da_carta + 1, e depois 2 * posicao_atual_da_carta + 1. Mas na segunda metade a logica foi (posicao_atual_da_carta - n) * 2.
     */
    if (posicao_atual_da_carta < n) {
      posicao_atual_da_carta = posicao_atual_da_carta * 2 + 1;
    } else {
      posicao_atual_da_carta = (posicao_atual_da_carta - n) * 2;
    }
  } while (posicao_atual_da_carta != posicao_alvo);
  cout << numerdo_de_embaralhamento << endl;
}