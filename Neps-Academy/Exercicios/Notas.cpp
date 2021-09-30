#include <bits/stdc++.h>
using namespace std;

int ord(int a, int b) {
  return a < b;
}

int N;
vector<int> v;

int main() {
  cin >> N;

  // leitura de dados
  for (int i = 0; i < N; i++) {
    int temp;
    cin >> temp;
    v.push_back(temp);
  }

  // odenação de dados
  sort(v.begin(), v.end());


  //20 25 85 40 25 90 25 40 55 40
  //20 25 25 25 40 40 40 55 85 90
  //v1
  //25 25 25 40 40 40

  //20 20 25 25 25 40 40 40 85 90
}
