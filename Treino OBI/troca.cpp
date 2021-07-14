/*
Trocas
Prova Teste ? OBI2021
*/

#include <bits/stdc++.h>
using namespace std;
#define f first
#define s second

vector<string> cima, baixo, res;
int N_cartas, max_troca;

void func_troca(int x, int y) {
  for (int j = min(x, y) - 1; j < max(x, y); j++) {
    //faço um numero subir outro descer
    swap(cima[j], baixo[j]);
  }
}

int main() {
  cin >> N_cartas >> max_troca;

  for (int i = 0; i < N_cartas; i++) {
    string temp;
    cin >> temp;
    cima.push_back(temp);
  }

  for (int i = 0; i < N_cartas; i++) {
    string temp;
    cin >> temp;
    baixo.push_back(temp);
  }

  for (int i = 0; i < max_troca;i++) {
    int x, y;
    cin >> x >> y;
    func_troca(x, y);
  }

  for (int i = 0; i < N_cartas;i++) {
    cout << cima[i] << " ";
  }

}

//g++ troca.cpp -o troca.exe && troca.exe < input.txt

/*
16 1
31 2 45 3 8 1 32 10 4 27 12 7 7 9 63 47
1 12 6 4 97 2 87 10 3 9 55 56 11 90 3 8
5 11
*/
