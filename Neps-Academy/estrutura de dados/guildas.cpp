/*
Guildas
https://neps.academy/br/course/estruturas-de-dados-(codcad)/lesson/guildas
Fonte: Neps Academy
*/
#include <bits/stdc++.h>
using namespace std;

#define MAXN 100100

int n, k;
int pontos[MAXN], guildas[MAXN];
int pai[MAXN], peso[MAXN], qtd[MAXN];

int find(int x) {
   if (guildas[x] == x) return x;
    return guildas[x] = find(guildas[x]);
}

void join(int x, int y) {
    int a = find(x);
    int b = find(y);
    guildas[a] = b;
    pontos[b] += pontos[a];
}

int main() {
    int m, n;
    while (cin >> n >> m) {
        if (n == 0 && m == 0) break;
        int ans = 0;
        // leio os pontos e quardo os times
        for (int i = 1; i <= n; i++) {
            cin >> pontos[i];
            guildas[i] = i;
        }
        // leio se tem uniao ou confronto entre guildas
        for (int i = 0; i < m; i++) {
            int condicao, guilda1, guilda2;
            cin >> condicao >> guilda1 >> guilda2;
            if (condicao == 1) {
                join(guilda1, guilda2);
            } else {
                int Guilda1 = find(guilda1);
                int Guilda2 = find(guilda2);
                int rafaelGuilda = find(1); // rafael sempre é o 1
                bool g1MaiorG2 = pontos[Guilda1] > pontos[Guilda2];
                bool g2MaiorG1 =  pontos[Guilda1] < pontos[Guilda2];
                // verifico se rafa é igual a alguma guilda
                bool rafa1 = Guilda1 == rafaelGuilda;
                bool rafa2 = Guilda2 == rafaelGuilda;
                if ((g2MaiorG1 and rafa2) or (g1MaiorG2 and rafa1)) ans++;
            }
        }
        cout << ans << endl;
    }
}
