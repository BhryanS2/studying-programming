#include <bits/stdc++.h>
using namespace std;

typedef vector<int> altura;

#define PB push_back

bool eh_crescente(altura h, int inicio, int fim) {
  for (int i = inicio; i < fim; i++) {
    if (h[i] >= h[i + 1]) {
      return false;
    }
  }
  return true;
}

bool eh_decrescente(altura h, int inicio, int fim) {
  for (int i = inicio; i < fim; i++) {
    if (h[i] <= h[i + 1]) {
      return false;
    }
  }
  return true;
}

bool tem_vale(altura h, int inicio_montanha, int fim_montanha) {
  if (fim_montanha < inicio_montanha + 2) {
    return false;
  }

  for (int j = inicio_montanha + 1; j < fim_montanha; ++j) {
    if (eh_decrescente(h, inicio_montanha, j) && eh_crescente(h, j, fim_montanha)) {
      return true;
    }
  }
  return false;
}

int main() {
  int n, k;
  cin >> n >> k;
  altura h(n + 1);
  for (int i = 0; i < n; i++) {
    cin >> h[i];
  }

  // encontrar as montanhas
  altura montanhas;
  for (int i = 1; i < n - 1; i++) {
    if (h[i] > h[i - 1] && h[i] > h[i + 1]) {
      montanhas.PB(i);
    }
  }

  // contar quantas montanhas tem
  if (montanhas.size() != k) {
    cout << "ugly" << endl;
    return 0;
  }

  bool estrutura = true;


  // Regra 1: Subida incial até a primeira montanha
  if (!eh_crescente(h, 0, montanhas[0])) {
    estrutura = false;
  }

  // Regra 2: Verificar se cada montanha tem um vale
  if (estrutura) {
    if (!eh_decrescente(h, montanhas.back(), n - 1)) {
      estrutura = false;
    }
  }

  cout << (estrutura ? "beautiful" : "ugly") << endl;

  return 0;
}


//g++ 1877.cpp -o exe;cat input.txt | ./exe
