/*
https://neps.academy/br/exercise/252
Frequência na Aula
Fonte: OBI 2012 - Primeira Fase
*/
#include <bits/stdc++.h>
using namespace std;

set<int> alunos;
int N;

int main() {
  cin >> N;

  for (int i = 0; i < N;i++) {
    int temp;
    cin >> temp;
    alunos.insert(temp);
  }

  cout << alunos.size() << endl;

}
