#include <bits/stdc++.h>
using namespace std;
//ao invés de declarar algo tão grande eu defino um nome para o pair
typedef pair<int, int> pii;
typedef queue<pii> grafo;

//m e n dimenções da matriz, X e Y representam a cordenada
int m, n, x, y;

//matriz em si
char matriz[505][505];

//faço a BFS
void bfs() {
    //inicio uma fila
    grafo fila;

    //o X e y dentro da chaves é para dizer que isso é um pair
    fila.push({ x, y });

    //enquato a fila não estiver vazia
    while (!fila.empty()) {
        x = fila.front().first;
        y = fila.front().second;
        fila.pop();

        // veficamos se está dentro do grafo
        if (x + 1 < n) {
            //se for uma pratileira faça
            if (matriz[x + 1][y] == '#') {
                
                //verificamos se adicionamos esse ponto já é uma gota
                if(matriz[x][y + 1] == '.'){
                    //se ele for um ponto ele ele vira uma gota e é puxado para fila
                    matriz[x][y + 1] = 'o';
                    fila.push({x, y + 1});
                }

                //verificamos se atrás da gota tem ponto
                if(matriz[x][y - 1] == '.') {
                    //se tiver adiconamos uma gota e puxamos para fila
                    matriz[x][y - 1] = 'o';
                    fila.push({x, y - 1});
                }
            //caso ao contrario, se ele for um ponto vira gota
            } else if( matriz[x + 1][y] = '.') {
                matriz[x + 1][y] = 'o';
                fila.push({x + 1, y});
            }
        }

    }
}

int main() {
    //leio as dimenções da matriz
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matriz[i][j];
            //pegamso a cordenada da primeira goteira
            if (matriz[i][j] == 'o') {
                x = i;
                y = j;
            }
        }
    }
    //chamamos o BFS
    bfs();
    //imprimimos a matriz
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << matriz[i][j];
        }
        cout << endl;
    }
}