/*
Maior Área
https://neps.academy/br/exercise/214
*/
#include <iostream>
using namespace std;

int main() {
    int n1, n2, n3, n4, mult1, mult2;

    cin >> n1 >> n2 >> n3 >> n4;
    mult1 = n1 * n2;
    mult2 = n3 * n4;
    if (mult1 > mult2) cout << "Primeiro" << endl;
    else if (mult1 < mult2) cout << "Segundo" << endl;
    else cout << "Empate" << endl;
}
