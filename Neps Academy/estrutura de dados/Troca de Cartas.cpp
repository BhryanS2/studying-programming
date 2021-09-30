/*
https://neps.academy/br/course/10/lesson/280
Troca de Cartas
*/
#include <bits/stdc++.h>
using namespace std;

int a, b, cont1, cont2;

set<int>Set1, Set2, c;

int main() {
    cin >> a >> b;
    int tmp;

    for (int i = 0; i < a; i++) {
        cin >> tmp;
        Set1.insert(tmp);
        c.insert(tmp);
    }

    for (int i = 0; i < b; i++) {
        cin >> tmp;
        Set2.insert(tmp);
        c.insert(tmp);
    }

    for (auto carta : c) {

        auto busca1 = Set1.find(carta);
        auto busca2 = Set2.find(carta);

        if (busca1 != Set1.end() && busca2 == Set2.end()) cont1++;
        if (busca2 != Set2.end() && busca1 == Set1.end()) cont2++;

    }

    cout << min(cont1, cont2) << endl;

    return 0;
}
