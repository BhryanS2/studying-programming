/*
Fissura perigosa
OBI 2020
*/
#include <iostream>
#include <string>
using namespace std;

#define MAX 550
int M[MAX][MAX];
bool passou[MAX][MAX];
int N, forca;

void PodePreencher(int x, int y) {
  // se ja passei, nao continue a busca
  if(passou[x][y]) return;
  //se eu não passei, to passando
  else passou[x][y] = true;


  // se a lava puder chegar ele toma aquela posisao
  if (M[x][y] <= forca) {
    M[x][y] = '*';
  }
  else return;

  // se eu pude preencher o local então verifoc os lados
  // atrás na linha
  if (x - 1 >= 0) {
    PodePreencher(x - 1, y);
  }
  // frente na linha
  if (x + 1 < N) {
    PodePreencher(x + 1, y);
  }
  // atrás na coluna
  if (y - 1 >= 0) {
    PodePreencher(x, y - 1);
  }
  // frente na coluna
  if (y + 1 < N) {
    PodePreencher(x, y + 1);
  }
}

int main() {
  cin >> N >> forca;
  string s;
  getline(cin, s);
  for (int i = 0; i < N; i++) {
    getline(cin, s);
    for (int j = 0; j < N; j++) {
      M[i][j] = s[j] - '0';
    }
  }
  // processamento
  PodePreencher(0, 0);
  // for (int i = 0; i < n; i++) {
  //   for (int j = 0; j < n; j++) {
  //     PodePreencher(i, j, forca, N);
  //   }
  // }
  // saida
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      if (M[i][j] == '*') cout << '*';
      else  cout << M[i][j];
    }
    cout << endl;
  }

}

//g++ fissura.cpp -o fissura.exe && fissura.exe < input.txt
