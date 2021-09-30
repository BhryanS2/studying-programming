
/*
https://neps.academy/br/exercise/399
Vogais e Consoantes
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  string v, c;

  getline(cin, s);
  for (int i = 0; i < s.size(); i++) {
    if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') v += s[i];
    else if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U') v += s[i];
    else c += s[i];
  }

  cout << "Vogais: " << v << endl;
  cout << "Consoantes: " << c << endl;
}
