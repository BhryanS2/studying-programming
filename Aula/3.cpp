// Crie uma struct Aluno com campos para nome, matrícula e três notas. Implemente funções para calcular a
// média das notas do aluno, verificar se o aluno foi aprovado (média >= 7) e imprimir os dados do aluno.

#include <bits/stdc++.h>
using namespace std;

struct Alunos {
  string nome;
  string id;
  double n1, n2, n3;
  double media() {
    return (this->n1 + this->n2 + this->n3) / 3;
  }

  bool aprovado() {
    return this->media() >= 7;
  }
};


int main() {
  Alunos aluno;
  cin >> aluno.nome >> aluno.id >> aluno.n1 >> aluno.n2 >> aluno.n3;
  if(aluno.aprovado()) {
    cout << "Aluno " << aluno.nome << " de matricula " << aluno.id<<" foi aprovado" << endl;
  } else {
    cout << "Aluno " << aluno.nome << " de matricula " << aluno.id<<" foi aprovado" << endl;
  }
}
