#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    const int N = 1000;     // Tamanho máximo do vetor
    const int Q = 4000;     // Número máximo de consultas
    const int VAL = 1000;   // Valor dos elementos do vetor

    // Imprime N
    cout << N << '\n';

    // Imprime o vetor com N elementos, todos iguais a VAL (1000)
    for (int i = 0; i < N; ++i) {
        cout << VAL << (i < N - 1 ? ' ' : '\n');
    }

    // Imprime Q
    cout << Q << '\n';

    // Imprime Q consultas com o valor 4000 (soma de 4 x 1000)
    for (int i = 0; i < Q; ++i) {
        cout << 4000 << '\n';
    }

    return 0;
}
