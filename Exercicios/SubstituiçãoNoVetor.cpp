#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v(10);

    for (int i = 0; i < 10; i++) {
        cin >> v[i];
    }

    int menor = v[0];

    for (int i = 0; i < 10; i++) {
        if (menor > v[i]) {
            menor = v[i];
        }
    }

    cout << "Menor: " << menor << endl;
    cout << "Ocorrencias: ";
    for (int i = 0; i < 10; i++) {
        if (v[i] == menor) {
            cout << i << " ";
            v[i] = -1;
        }
    }
    cout << endl;
    for (int i = 0; i < 10; i++) {
        cout << v[i] << " ";
    }
}
