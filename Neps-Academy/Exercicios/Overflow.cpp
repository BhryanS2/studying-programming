/*
https://neps.academy/br/exercise/225
Overflow
Fonte: OBI 2009 - Primeira Fase
*/
#include<iostream>

using namespace std;

int main() {
  char op;
  long int n1, n2, n3;

  cin >> n1 >> n2 >> op >> n3;

  if (op == '*') {
    if (n2 * n3 > n1) cout << "OVERFLOW" << endl;
    else cout << "OK" << endl;
  } else {
    if ((n2 + n3) > n1) cout << "OVERFLOW" << endl;
    else cout << "OK" << endl;
  }
}
