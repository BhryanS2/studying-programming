/*
https://neps.academy/br/exercise/522
Receita de Bolo
Fonte: OBI 2012 - Segunda Fase
*/
#include <bits/stdc++.h>
using namespace std;

int QuantasReceitas(int a, int b, int c) {
  vector<int>arr;
  // 2, 3,5
  if (a >= 2 and b >= 3 and c >= 5) {
    arr.push_back(a / 2);
    arr.push_back(b / 3);
    arr.push_back(c / 5);
    sort(arr.begin(), arr.end());
    return arr[0];
  } else return 0;

}

int main() {
  int a, b, c;

  cin >> a >> b >> c;
  cout << QuantasReceitas(a, b, c) << endl;
}
