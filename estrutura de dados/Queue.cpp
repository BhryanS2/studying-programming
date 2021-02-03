/*
Queue
https://neps.academy/br/course/10/lesson/256
*/
#include <bits/stdc++.h>
using namespace std;
/*
queue representa uma fila, exatamente como estamos acostumados. As principais operações de uma fila são, adicionar alguém ao fim da fila e consultar (ou remover) o elemento que está na frente da fila.

Antes de continuarmos a conhecer a queue vamos ver como seriam essas duas operações em um vector:
*/
void OPvector() {
  cout << "vector" << endl;
  vector<int> V;

  V.push_back(1);
  V.push_back(4);
  V.push_back(6);
  V.push_back(2);

  //Operação 1 - Adicionar um elemento ao final do vetor
  V.push_back(8);

  for (int i = 0;i < (int)V.size() - 1;i++) cout << V[i] << " ";
  cout << endl;

  //Operação 2 - Remover o primeiro elemento do vetor
  for (int i = 0;i < (int)V.size() - 1;i++) V[i] = V[i + 1];


  for (int i = 0;i < (int)V.size() - 1;i++) cout << V[i] << " ";

  V.pop_back();
  cout << endl;

  for (int i = 0;i < (int)V.size() - 1;i++) cout << V[i] << " ";

  cout << "fim do vector" << endl;
}

/*
  Como podemos ver a primeira operação é feito em tempo constante,
  ou seja, O(1) e a segunda operação é feito em tempo linear (O(n)).
  queue tem a habilidade de adicionar um elemento no final e consultar o primeiro elemento muito rápido
  porém, caso você queira um elemento que está no meio da queue,
  você precisa passar por cada elemento que vem antes dele, isso nos dá um complexidade linear no pior caso (O(n)).

  Então, sempre que precisarmos deletar o primeiro elemento várias vezes, usaremos uma queue,
  sempre que precisarmos acessar um elemento diferente do primeiro várias vezes, usaremos um vector.
*/

/*
O código mostra como resolver o seguinte problema: “Imagine uma fila para um caixa de supermercado, o atendente do caixa atende os clientes na ordem que eles aparecem na fila, mas ele atende apenas um cliente por vez. Nossa fila tem apenas duas operações, alguém chega na fila (operação 1) ou alguém é atendido pelo caixa (operação 2). Em um determinado momento, o caixa do supermercado deu problema (marcaremos esse momento pela operação 0), e nós queremos saber quem ainda está na fila nesse momento.”
*/
void problema() {
  cout << "comeco do queue" << endl;
  queue<int> fila;
  int op, id;

  cout << "digite uma operacao, \nop = 0, caixa quebrado \nop = 1, alguem chegou\nop = 2, o caixa atende\n";
  while (cin >> op) { //vamos ler a operação
    if (op == 0) break;
    //se operação for 0, o caixa do supermecado quebrou
    if (op == 1) {
      //Algiuém chegou na fila
      cin >> id;
      fila.push(id);
    }
    else if (op == 2) { //o caixa vai atender alguém
      if (!fila.empty()) {
        //Se a fila não for vazia, ou seja, tiver alguém na fila
        fila.pop();
        //o caixa atende a pessoa da frente da fila,
        //deletamos essa pessoa da fila
      }

    }
  }

  //após o caixa quebrar, queremos saber as pessoas que ainda estão na fila.
  while(!fila.empty()) { //enquanto a filoa não for vazia
    //pego a primeira pessoa da fila e imprimo
    cout << fila.front() << " ";

    //tiro a primeira pessoa da fila
    fila.pop();
  }
  cout << "fim do queue" << endl;
}

int main() {
  OPvector();
  problema();
}
