#include<bits/stdc++.h>
using namespace std;

struct alunos {
  int matricula;
  float nota;
};

int main() {
  alunos aluno[3];
  for (int i = 0; i < 3; i++)
  {
    cin >> aluno[i].matricula >> aluno[i].nota;
  }
  alunos aluno_maior_nota = aluno[0];
  for (int i = 1; i < 3; i++)
  {
    if(aluno[i].nota > aluno_maior_nota.nota) {
      aluno_maior_nota = aluno[i];
    }
  }

  cout << aluno_maior_nota.matricula << " " << aluno_maior_nota.nota << endl;


}


// g++ struct.cpp -o exe; cat input.txt | ./exe
