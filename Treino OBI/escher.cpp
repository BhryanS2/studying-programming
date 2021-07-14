/*
https://neps.academy/br/exercise/892
escher
OBI 2020
*/
#include <bits/stdc++.h>
using namespace std;
#define MAX 10010
int vec[MAX];

int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> vec[i];
  }

  int altura = vec[0] + vec[n - 1];
  bool escher = true;

  for (int i = 0; i <= n / 2; i++) {
    int correspondente = n - 1 - i;
    if (vec[i] + vec[correspondente] != altura) {
      escher = false;
    }
  }

  cout << (escher ? "S" : "N") << endl;
}

//g++ escher.cpp -o escher.exe && escher.exe < input.txt
