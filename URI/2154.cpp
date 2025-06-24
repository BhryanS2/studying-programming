#include<bits/stdc++.h>
using namespace std;

int main() {
  int n;
  while (cin >> n && n)
  {
    for (int i = 0; i < n; i++)
    {
      int coeficiente, expoente;
      scanf("%dx%d +", &coeficiente, &expoente);
      int novo_coeficiente = coeficiente * expoente;
      int novo_expoente = expoente - 1;
      cout << novo_coeficiente << "x" << (novo_expoente == 1 ? "" : to_string(novo_expoente));
      if (i < n - 1) {
        cout << " + ";
      }
    }

    cout << endl;
    
  }
  
}