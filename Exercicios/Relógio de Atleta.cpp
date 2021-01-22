/*
https://neps.academy/br/exercise/1026
Relógio de Atleta

*/

#include <bits/stdc++.h>
using namespace std;

/*
r = BPM em repouso
f = BPM em exercícios
c = capacidade de oxigenação
*/
int r, f, c;

int main() {

    cin >> r >> f >> c;
    
    /*
    diminuir se ( f >  3 * r || C < 95);
    aumentar se (f < 2 * r && c > 97);
    senão manter
    */

    if( f > (3*r) || c < 95 ) cout << "diminuir" << endl;
    
    else if(f < (2*r) && c > 97 ) cout << "aumentar" << endl;
    
    else cout << "manter" << endl;

}
