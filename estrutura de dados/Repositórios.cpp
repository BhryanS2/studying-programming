/*
Repositórios
https://neps.academy/br/course/10/lesson/275
Fonte: OBI 2007 - Primeira Fase
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, c;

    cin >> c >> n;

    map<int, int>  instalados, web;
    int p, v;

    for (int i = 0; i < c; i++) {
        cin >> p >> v;
        instalados[p] = v;
    }

    for (int i = 0; i < n; i++) {
        cin >> p >> v;
        if (instalados[p] < v) web[p] = max(web[p], v);
    }

    for (auto pos : web) cout << pos.first << " " << pos.second << endl;

}
