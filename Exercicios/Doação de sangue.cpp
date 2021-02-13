/*
Doação de sangue
https://neps.academy/br/exercise/754
*/
#include <bits/stdc++.h>
using namespace std;

int ano_ref, ano_nas;

int main() {
  cin >> ano_ref >> ano_nas;

  int res = ano_ref - ano_nas;

  if(res > 18 && res < 67) cout << res << "\n" << "Pode doar sangue" << endl;
  else cout << res << "\n" << "Nao pode doar sangue" << endl;
}
