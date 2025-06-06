#include <bits/stdc++.h>
using namespace std;

// pesquisando por problemas de circular, achei o Josephus 
// https://www.geogebra.org/m/ExvvrBbR
// J(n, k) = ((J(n - 1, k) + k - 1) % n) + 1

int J(int n, int k) {
  // int res = 0;
  // for (int i = 2; i <= n; i++) {
  //   res = (res + k) % i;
  // }
  // return res;{
  return (n == 1) ? 1 : ((J(n - 1, k) + k - 1) % n) + 1;
}


int main() {
  // a frase é: Lá em cima do piano tinha um copo de veneno, quem bebeu morreu, o culpado não fui eu
  // em silabas: lá-em-ci-ma-do-pi-a-no-ti-nha-um-co-po-de-ve-ne-no-quem-be-beu-mor-reu-o-cul-pa-do-não-fu-i-eu
  // tem 30 silabas
  // se o miguel é o primeiro, vamos tentar :D
  int n, k = 30;
  while (cin >> n && n != EOF)
  {
    n = n * 2 - 1;
    cout << J(n, k) << endl;
  }

  // se cada mão for um participante, vamos ter 2N de participante, aí remove a boca
  // map<int, string> res;
  // // BRUTE FORCE WIN
  // res[2]="vai ganhar";
  // res[8]="vai ganhar";
  // res[19]="vai ganhar";
  // res[21]="vai ganhar";
  // res[24]="vai ganhar";
  // res[33]="vai ganhar";
  // res[38]="vai ganhar";
  // res[47]="vai ganhar";
  // res[52]="vai ganhar";
  // res[56]="vai ganhar";
  // res[58]="vai ganhar";
  // res[201]="vai ganhar";
  // res[254]="vai ganhar";
  // res[282]="vai ganhar";
  // res[931]="vai ganhar";
  // res[955]="vai ganhar";
  // res[2013]="vai ganhar";

  // if (res[n] != "") cout << res[n] << endl;
  // else cout <<  "nao vai ganhar" << endl;
  // n = 2 * n - 1;
  // int res = J(n, k);
  // if (n > 40) cout << n << endl;
  // if(res) {
  //   cout << "nao vai ganhar" << endl;
  // } else {
  //   cout << "vai ganhar" << endl;
  // }
  return 0;
}
