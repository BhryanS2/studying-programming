/*
https://neps.academy/br/course/10/lesson/279
O Fantástico Jaspion
*/
#include <bits/stdc++.h>
using namespace std;

map <string, string> sap;
int n, m, t;
string jap, port, mus;

void leitura() {
    while (m--) {
        getline(cin, jap);
        getline(cin, port);
        sap[jap] = port;
    }
}

void imprime() {
    while (n--) {
        getline(cin, mus);
        stringstream music(mus);
        music >> mus;
        cout << (sap[mus].length() ? sap[mus] : mus);
        while (music >> mus) cout << " " << (sap[mus].length() ? sap[mus] : mus);
        cout << endl;
    }
    cout << endl;
}

int main() {
    cin >> t;
    while (t--) {
        cin >> m >> n;
        getline(cin, port);
        leitura();
        imprime();
        sap.erase(sap.begin(), sap.end());
    }

    return 0;
}
