/*
Quadrado Mágico (OBI 2011)
https://neps.academy/br/exercise/537
Fonte: OBI 2011 - Segunda Fase

Está com TLE
*/

#include <iostream>
using namespace std;

const int MAX = 1000;


int main() {
    int n;
    cin >> n;

    int m[MAX][MAX];

    // Leitura da matriz e cálculo das somas iniciais
    int sum = 0, sumDiagonal1 = 0, sumDiagonal2 = 0;
    for (int i = 0; i < n; i++) {
        int rowSum = 0;
        for (int j = 0; j < n; j++) {
            cin >> m[i][j];
            rowSum += m[i][j];
            if (i == j) sumDiagonal1 += m[i][j];
            if (i == n - 1 - j) sumDiagonal2 += m[i][j];
        }
        if (i == 0) sum = rowSum;
        else if (sum != rowSum) {
            cout << "0" << endl;
            return 0;
        }
    }

    // Verificação das somas das colunas
    for (int j = 0; j < n; j++) {
        int colSum = 0;
        for (int i = 0; i < n; i++) {
            colSum += m[i][j];
        }
        if (colSum != sum) {
            cout << "0" << endl;
            return 0;
        }
    }

    // Verificação das somas das diagonais
    if (sum != sumDiagonal1 || sum != sumDiagonal2) {
        cout << "0" << endl;
        return 0;
    }

    cout << sum << endl;

    return 0;
}
