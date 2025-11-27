#include<bits/stdc++.h>
using namespace std;
// 1) Procurar uma palavra num dado string. Se encontrou, retornar a
// posição no string. Senão, retornar 0.
// Exemplo: Dado a palavra “RIT” e o texto “ALGORITMO”, Obter 5.

int main() {
  string a, b;
  cin >> a >> b;
  int res = -1;


  for (int i = 0; i < b.size(); i++)
  {
    for (int j = 0; j < a.size(); j++)
    {
      if (b[i] == a[j]) {
        res = i;
        break;
      }
    }
    if (res != -1) break;
  }

  cout << res + 1 << endl;

}
