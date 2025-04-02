#include <bits/stdc++.h>
using namespace std;

/*
https://judge.beecrowd.com/pt/problems/view/3048
Sequência Secreta
*/

int main() {
  int n;
  int count =1;
  cin >> n;
  int seq[n];
  for (int i = 0; i < n; i++)
  {
    cin >> seq[i];
  }
  int aux = 0;
  for (int i = 0; i < n; i++)
  {
    if (i < n-1){
      aux = seq[i];
      if (aux != seq[i+1]) {
        count++;
      }
    }
  }

  cout << count << endl;
}
