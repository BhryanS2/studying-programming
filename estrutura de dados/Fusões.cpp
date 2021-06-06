/*
Fusões
https://neps.academy/br/course/estruturas-de-dados-(codcad)/lesson/fusoes
Fonte: OBI 2010 - Segunda Fase
*/
#include <bits/stdc++.h>
using namespace std;

#define MAXN 100100

int n, k;
int pai[MAXN], peso[MAXN], qtd[MAXN];

int find(int x) {
    if (pai[x] == x) {
        return x;
    }

    return pai[x] = find(pai[x]);
}

void join(int x, int y) {
    x = find(x);
    y = find(y);
    if (x == y) return;

    // se o patriarca x tiver peso menor que o patriarca y
    if (peso[x] < peso[y]) {
        pai[x] = y; // faço x ser filho do y
        qtd[y] += qtd[x]; // e atualizo o número de descendentes de y
    }

    // se o patriarca y tiver peso menor que o patriarca x
    if (peso[x] > peso[y]) {

        pai[y] = x; // faço y ser filho de x
        qtd[x] += qtd[y]; // e a tualizo o número de descendentes de x
    }

    // se os dois tiverem o mesmo peso
    if (peso[x] == peso[y]) {

        // escolho um para ser o novo patriarca
        pai[x] = y;

        // e guardo que seu peso aumentará um uma unidade
        peso[y]++;

        // e atualizo o seu número de descendentes
        qtd[y] += qtd[x];
    }
}
//tinha um passaro azul um amarelo e um preto

int main() {
    cin >> n >> k;
    for (int i = 1; i <= n; i++)pai[i] = i;

    for (int i = 0; i < k; i++) {
        char op;
        int banco1, banco2;
        cin >> op;
        cin >> banco1 >> banco2;
        /*
        Uma fusão é descrita na entrada como uma linha que começa com o caractere 'F'
        Uma consulta é descrita na entrada como uma linha que começa com o caractere 'C',
        */
        if (op == 'F')
            join(banco1, banco2);

        else
            cout << (find(banco1) == find(banco2) ? "S" : "N") << endl;

    }
}

/*
3 5
C 1 2
F 1 2
C 1 2
F 1 3
C 1 3
*/
