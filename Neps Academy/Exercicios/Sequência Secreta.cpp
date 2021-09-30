/*
Sequência Secreta
https://neps.academy/br/exercise/464
Fonte: OBI 2019 - Primeira Fase
*/
#include <bits/stdc++.h>
using namespace std;

int n, x, y, cont;

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> y;

        if (y != x) {
            x = y;
            cont++;
        }
    }

    cout << cont << endl;
}
