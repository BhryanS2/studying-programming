#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    double comida;
    cin >> comida;
    int dias = 0;
    while (comida > 1)
    {
      comida = comida * 0.5;
      dias++;
    }

    cout << dias << " dias" << endl;

  }

}
