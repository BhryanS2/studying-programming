/*
https://neps.academy/br/exercise/463
A Idade de Dona Mônica
Fonte: OBI 2019 - Primeira Fase
*/

#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
using namespace std;

int m, a, b, c;
vector<int> v;

int ord(int a, int b){
    return a > b;
}

int main() {
    cin >> m >> a >> b;
    c = m - a - b;
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);
    sort(v.begin(), v.end(), ord);

    cout << v[0] << endl;
    /*
    você também poderia ter feito assim
    a leitura continuaria a mesma
    c = m - a - b;
    então você usaria
    cout << max(a, max(b, c)) << endl;
    também fuinaria da mesma forma
    */

}
