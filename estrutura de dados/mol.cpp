#include <bits/stdc++.h>
using namespace std;

int main() {
    /*
    93154685123654984215487954515482321564587989 % 11
    não para interio, vamo string kk
    */
    string num = "93154685123654984215487954515482321564587989";
    //string num = "171";
    int modulo = 11;
    /*
    na aritimetica modular podemos pegar cada numero e tirar o modulo,
    no final vamos ter o mesmo resultado

    171 % 8
    1 % 8 = 1 * 10 = 10
    10 + 7 = 17
    17 % 8 = 1 * 10 = 10
    1 + 10 = 11
    11 % 8 = 3

    vamos aplicar esse conceito nessa string
    */
    int res = 0, numInt;
    for (int i = 0; i < num.size(); i++) {
        res = res * 10 + (num[i] - '0');
        //o zero como string vale 48
        res = res % modulo;
    }

    cout << res;
    //res = 2
}
