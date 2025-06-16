/*
Problema da fila
*/
#include <bits/stdc++.h>
using namespace std;

#define PB push_back

int main() {
  vector<int> v;
  int n;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    v.PB(x);
  }

  int count = 0;
  int maior = -1;
  for (int i = n - 1; i >= 0; i--)
  {
    // cout << v[i] << " " << (v[i] >= maior) << " ";
    if (v[i] > maior) {
      maior = v[i];
    } else count++;
  }
  cout << count << endl;
  return 0;
}


//g++ fila.cpp -o exe; cat input.txt | ./exe
