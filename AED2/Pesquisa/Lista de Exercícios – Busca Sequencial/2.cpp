#include <bits/stdc++.h>
using namespace std;
// 2) Crie um vetor de números inteiros, coloque-o em ordem
// crescente e faça uma busca sequencial.


int main() {
  srand(time(0));
  vector<int> v;
  for (int i = 0; i < 10; i++)
  {
    int n = (rand() % 100) + 1;
    v.push_back(n);
  }

  int to_search = v[6];
  sort(v.begin(), v.end());

  for (int i = 0; i < 10; i++)
  {
    if(v[i] == to_search) {
      printf("Found %d in pos %d\n", to_search, i);
      break;
    }
  }
}
