/*
Dario e Xerxes
https://neps.academy/br/exercise/25
Fonte: OBI 2017 - Segunda Fase
*/
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int n, x, d, contx = 0, contd = 0;

int main() {
  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> d >> x;
    switch (d) {
    case 0:
      if (x == 1 || x == 2) contd++;
      else if (x == 3 || x == 4) contx++;
      break;
    case 1:
      if (x == 2 || x == 3) contd++;
      else if (x == 0 || x == 4) contx++;
      break;
    case 2:
      if (x == 4 || x == 3) contd++;
      else if (x == 1 || x == 0) contx++;
      break;
    case 3:
      if (x == 0 || x == 4) contd++;
      else if (x == 2 || x == 1) contx++;
      break;
    case 4:
      if (x == 0 || x == 1) contd++;
      else if (x == 3 || x == 2) contx++;
      break;
    default:
      break;
    }
  }

  cout << (contd > contx ? "dario" : "xerxes") << endl;
}
