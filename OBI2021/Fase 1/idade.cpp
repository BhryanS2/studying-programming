#include <bits/stdc++.h>
using namespace std;

vector<int> idades;

int main() {
  // int cibele, camila, celeste, N;
  // cin >> N >> cibele >> celeste;
  for (int i = 0; i < 3; i++) {
    int n;
    cin >> n;
    idades.push_back(n);
  }
  sort(idades.begin(), idades.end());

  cout << idades[1] << endl;
  //cibele antes de camila - mais nova
  //celeste depois de camila - mais velha


  return 0;
}
//g++ exercicio1.cpp -o exercicio1.exe && exercicio1.exe < input.txt
