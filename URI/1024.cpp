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
  string s;
  for (int i = 0; i < n; i++)
  {
    cin >> s;
    string positionMoved = movePosition(s, 3);
    reverse(positionMoved.begin(), positionMoved.end());
    positionMoved = movePosition(positionMoved, -1);

    cout << positionMoved << endl;
  }
  return 0;
}
