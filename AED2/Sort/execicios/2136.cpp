/*

*/
#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<string> convidados;
  string s, op;
  while (cin >> s >> op && s != "FIM")
  {
    if (op == "YES") convidados.push_back(s);
  }

  string ganhador = convidados[0];
  for (string convidado : convidados)
  {
    if(ganhador.size() < convidado.size()) ganhador = convidado;
  }


  sort(convidados.begin(), convidados.end());



  return 0;
}


//g++ exe.cpp -o exe; cat input.txt | ./exe
