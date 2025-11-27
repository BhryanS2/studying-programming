#include <bits/stdc++.h>
using namespace std;
// 3) Refaça a função de busca sequencial assumindo que o vetor
// possui chaves que podem ocorrer múltiplas vezes no vetor. Neste
// caso, você deve retornar, em um outro vetor, todas as posições
// onde a chave foi encontrada. Sua função deve retornar o número de
// ocorrências da chave no vetor e, para cada uma destas
// ocorrências, indicar no vetor posicoes[], as posições de vet que
// possuem a chave.

int main()
{
  int v[10] = {34, 6, 55, 59, 70, 55, 44, 19, 22, 36};
  int k = 55, count = 0;
  int s[10];
  for (int i = 0; i < 10; i++)
  {
    if(v[i] == k) {
      s[count++] = i + 1;
    }
  }
  for (int i = 0; i < count; i++)
  {
    cout << s[i]  << " ";
  }

  cout << endl;

}
