#include <bits/stdc++.h>
using namespace std;

int main() {
    queue <char> fila;

    for (char c = 'A'; c <= 'P'; c++) fila.push(c);

    for (int i = 0; i < 15; i++) {
        int a, b, ca, cb;

        ca = fila.front();
        fila.pop();
        cb = fila.front();
        fila.pop();

        cin >> a >> b;

        if (a > b) fila.push(ca);
        else fila.push(cb);
    }

    cout << (char)fila.front() << endl;

    return 0;
}