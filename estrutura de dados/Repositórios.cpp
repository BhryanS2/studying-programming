/*
Repositórios
https://neps.academy/br/course/10/lesson/275
Fonte: OBI 2007 - Primeira Fase
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int n, c;
map<ll, ll>  instalados;
map<ll, ll> web;

int main() {
    cin >> c >> n;

    ll p, v;

    for (int i = 0; i < c; i++) {
        cin >> p >> v;
        instalados.insert(make_pair(p, v));
    }

    for (int i = 0; i < n; i++) {
        cin >> p >> v;
        web[p] = v;
    }

    for(map<ll, ll>::iterator pos = instalados.begin(); pos != instalados.end(); pos++){
        if(web.find(pos -> first) != web.end()){
            if(web[pos -> first] > pos -> second){
                cout << pos -> first << " " << web[pos -> first] << endl;
            }
        }
    }
}
