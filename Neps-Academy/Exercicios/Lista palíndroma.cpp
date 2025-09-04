#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  int l = 0, r = n - 1;
  int count_operations = 0;
  while (l < r) {
    if (v[l] == v[r]) {
      l++;
      r--;
      // se o valor das posições foram iguais
      // não preciso contar
    } else if (v[l] < v[r]) {
      v[l + 1] += v[l];
      // se o valor da posição l for menor que o valor da posição r
      // então a soma do valor da posição l com o próximo valor
      // garante que o valor da posição l será maior ou igual ao valor da posição r
      // e assim, a posição l pode ser descartada
      l++;
      count_operations++;
    } else {
      v[r - 1] += v[r];
      // mesmo raciocínio, mas agora com a posição r
      // se o valor da posição r for menor que o valor da posição l
      // então a soma do valor da posição r com o anterior
      r--;
      count_operations++;
    }
  }
  cout << count_operations << endl;

  return 0;
}


//g++ "Lista palíndroma.cpp" -o exe;cat input.txt | ./exe
