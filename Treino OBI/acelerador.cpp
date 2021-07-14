/*
Acelarador de particulas
OBI 2020
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  n -= 3;
  n %= 8;

  if(n == 3) cout << 1 << endl;
  else {
    cout << (n == 4 ? 2 : 3) << endl;
  }
}
//g++ acelerador.cpp -o acelerador.exe && acelerador.exe < input.txt
