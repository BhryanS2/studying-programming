#include<bits/stdc++.h>
using namespace std;
/**
 * https://judge.beecrowd.com/pt/problems/view/1024
 * URI | judge | beecrowd
*/


string movePosition(string s, int move) {
  int size = s.length();
  for (int i = 0; i < size; i++)
  {
    if (s[i] >= 97 && s[i] <= 122) {
      s[i] = s[i]+move;
    }
  }
  return s;
}

int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    int hora, minuto, open;
    cin >> hora >> minuto >> open;
    cout << (hora < 10 ? ) << ":" << minuto << " - A porta " << (open ? "abriu!" : "fechou!") << endl;
  }
  return 0;
}
