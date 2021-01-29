/*
https://neps.academy/br/exercise/398
Quantas Letras?

*/
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
  int cont = 0;
  string s, c, res;

  cin >> s;
  cin >> c;

  for (int i = 0; i < s.size(); i++) res += c;
  //cout << "res "<< res[i] << endl;

  for (int i = 0; i < s.size(); i++)
    if (s[i] == res[i]) cont++;
    //cout << s[i];
    //cout << "C " << c[i] << endl;

  cout << cont << endl;
}
