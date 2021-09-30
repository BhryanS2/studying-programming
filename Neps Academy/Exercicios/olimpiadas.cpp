/*
https://neps.academy/br/exercise/243
Olimpíadas
Fonte: OBI 2009 - Segunda Fase
*/
#include <bits/stdc++.h>

using namespace std;

int n, m;

struct pais {
    int ouro, prata, bronze, id;
};

pais v[105];

int ord(pais a, pais b) {
    if (a.ouro != b.ouro) return a.ouro > b.ouro;
    if (a.prata != b.prata) return a.prata > b.prata;
    if (a.bronze != b.bronze) return a.bronze > b.bronze;
    return a.id < b.id;
}

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        v[i].ouro = 0;
        v[i].prata = 0;
        v[i].bronze = 0;
        v[i].id = i + 1;
    }

    for (int i = 0; i < m; i++) {
        int o, p, b;
        cin >> o >> p >> b;
        v[o - 1].ouro++;
        v[p - 1].prata++;
        v[b - 1].bronze++;
    }

    sort(v, v + n, ord);

    for (int i = 0; i < n; i++) cout << v[i].id << " ";
    cout << endl;

    return 0;
}
