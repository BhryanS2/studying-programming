#include<bits/stdc++.h>
using namespace std;
/**
 * https://judge.beecrowd.com/pt/problems/view/1024
 * URI | judge | beecrowd
*/


int main() {
  int cidades, fronteiras, total;
  cin >> cidades >> fronteiras;
  int ponte[cidades];
  total=cidades;
  memset(ponte, 0, sizeof(ponte));
  for (int i = 0; i < fronteiras; i++)
  {
    int c1, c2;
    cin >> c1 >> c2;
    if (ponte[c1-1]!=0 || ponte[c2-1]!=0 ) total--;
    ponte[c1 - 1] = c2;
    ponte[c2 - 1] = c1;
  }
  int count = 0;
  for (int i = 0; i < cidades; i++)
  {
    if (ponte[i] <= 1) count++;
  }

  cout << total << endl;

}
