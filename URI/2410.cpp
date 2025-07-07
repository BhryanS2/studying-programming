/*
https://judge.beecrowd.com/pt/problems/view/2410
Frequência na Aula
Fonte: OBI 2012 - Primeira Fase
*/
#include <bits/stdc++.h>
using namespace std;

int n;

int main() {
  cin >> n;

  const int MAX = 1e6 + 1;
  vector<bool> presente(MAX, false);

  int count = 0;
  for (int i = 0; i < n; ++i) {
    int id;
    cin >> id;
    if (!presente[id]) {
      presente[id] = true;
      count++;
    }
  }

  cout << count << endl;
  return 0;
}

//g++ 2410.cpp -o exe;cat input.txt | ./exe
