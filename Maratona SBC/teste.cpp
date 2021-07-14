#include <bits/stdc++.h>
using namespace std;

#define MAX 1300

int n, cont, k;

int minimo[MAX];
int maximo[MAX];
int cor[MAX];
bool T[MAX];

vector<int> vec;

int process(int v, int d) {
  if (cor[v] != 0) {
    if (cor[v] < 0) {
      cont++;
      maximo[cont] = 0;
      minimo[cont] = d + cor[v];
      return cont;
    }
    else return cor[v];
  }

  else {
    cor[v] = -d;
    int r = process(vec[v], d + 1);
    cor[v] = r;
    maximo[r]++;
    return r;
  }
}

int main() {
  cin >> n >> k;

  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    a--;
    vec.push_back(a);
    minimo[i] = maximo[i] = cor[i] = 0;
  }

  cont = 0;
  for (int i = 0; i < n; i++) process(i, 1);

  T[0] = true;

  for (int i = 1; i <= cont; i++) {
    for (int j = n; j >= 0; j--) {
      for (int t = minimo[i]; t <= maximo[i]; t++) {
        // se N menos o t(minimo para máximo) for maior que 0
        // pode participar
        if (j - t >= 0 && T[j - t]) T[j] = true;
      }
    }
  }

  // posição que for verdadeira é imprimida e quebra o loop
  for (int j = k; j >= 0; j--) {
    if (T[j]) {
      printf("%d\n", j);
      break;
    }
  }
  return 0;
}
