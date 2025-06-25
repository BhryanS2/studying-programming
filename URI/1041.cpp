/*
https://neps.academy/br/exercise/146
Quadrante
*/
#include<bits/stdc++.h>
using namespace std;

int main() {
  double x, y;
  cin >> x >> y;

  if (x > 0.0 && y > 0.0) cout << "Q1" << endl;
  else if (x < 0.0 && y > 0.0) cout << "Q2" << endl;
  else if (x < 0.0 && y < 0.0) cout << "Q3" << endl;
  else if (x > 0.0 && y < 0.0) cout << "Q4" << endl;
  else if (x == 0.0 && y == 0.0) cout << "Origem" << endl;
  else if (y == 0.0) cout << "Eixo X" << endl;
  else if (x == 0.0) cout << "Eixo Y" << endl;

  return 0;
}

