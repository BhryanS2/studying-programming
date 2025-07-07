/*

*/
#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c, d;
  // a = minimo deleite que o cliente deseja
  // b = maximo de leite que o cliente deseja
  // c = capacidade da xicara
  // d = volume do café preparado pela maquina
  cin >> a >> b >> c >> d;
  bool res = false;
  for (int i = 1; i <= c; i++)
  {
    int dose = c - (i * d);
    // cout << dose << endl;
    if ( dose >= a &&  dose <= b) {
      res = true;
      break;
    }
  }

  cout << (res ? "S" : "N") << endl;

  return 0;
}


//g++ exe.cpp -o exe; cat input.txt | ./exe
