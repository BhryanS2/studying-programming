#include <iostream>
#include <vector>
#include <random>
using namespace std;

int main() {
    int order = 1000;
    int maxValue = 1000000000;
    
    cin >> order >> maxValue;

    // Inicializar o gerador de números aleatórios
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> dist(1, maxValue);

    vector<vector<int>> matrix(order, vector<int>(order));

    // Preencher a matriz com valores aleatórios
    for (int i = 0; i < order; i++) {
        for (int j = 0; j < order; j++) {
            matrix[i][j] = dist(gen);
        }
    }

    // Imprimir a matriz
    for (int i = 0; i < order; i++) {
        for (int j = 0; j < order; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
