#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, cont = 1, resposta = 0;
    long int v, aux = 0;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> v;
        cont = v == aux ? cont + 1 : 1;
        aux = v;
        resposta = cont > resposta ? cont : resposta;
    }

    cout << resposta;
}