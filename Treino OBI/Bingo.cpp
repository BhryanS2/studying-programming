/*
Bingo!
Fonte: OBI 2020 - Primeira Fase - A
*/

#include <bits/stdc++.h>
using namespace std;
#define MAXN 1010
#define MAXU 10010

bool cartela[MAXN][MAXU];//cartelas
int cont[MAXN];//quantos forma preenchidos
vector<int> ganhadores;

int main() {
  int N, K, U;
  cin >> N >> K >> U;
  for (int i = 0; i < N; i++) {
    int value;
    for (int j = 0; j < K; j++) {
      cin >> value;
      cartela[i][value] = true;
    }
  }

  int x;
  for (int i = 0; i < U; i++) {
    cin >> x;
    for (int j = 0; j < N; j++) {
      if(cartela[j][x]) {
        cont[j]++;
        if(cont[j] == K){
          //ganhador
          ganhadores.push_back(j + 1);
        }
      }
    }
    if(ganhadores.size() > 0) break;
  }

  for(int i = 0; i < ganhadores.size(); i++) {
    cout << ganhadores[i] << " ";
  }
  cout << endl;
}
//g++ Bingo.cpp -o Bingo.exe && Bingo.exe < input.txt
