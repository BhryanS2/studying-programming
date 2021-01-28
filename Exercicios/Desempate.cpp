/*
Desempate
https://neps.academy/br/exercise/768
*/
#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> vec;

int main() {

  cin >> n;

  for (int i = 0; i < n; i++) {
    int temp;
    cin >> temp;
    vec.push_back(temp);
  }

  sort(vec.begin(), vec.end());

  int cont = 0;

  for(int i = 0; i < n; i++) {
    if (vec[i] == vec[i + 1]) {
      vec[i] += i;
      cont++;
    }
  }

  cout << cont << endl;
}
