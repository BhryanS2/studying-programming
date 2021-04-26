/*
Quadradinho de 8
https://neps.academy/br/exercise/508
Fonte: OBI 2013 - Segunda Fase
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl

int n, soma, qtd[10];
ll res;

int main() {
    cin >> n;
    qtd[0] = 1;

    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        soma += temp;
        soma %= 8; // atualizo a congruência de soma (mod 8)
        // e para cada posição anterior que soma de todos os números
        // até tal posição era congruente a 8 (mod 0)
        res += qtd[soma]; // adiciono uma possível resposta

        // e guardo que encontrei outra posição de soma congruente a 0 (mod 8)
        qtd[soma]++;
    }

    cout << res << nl;
}
