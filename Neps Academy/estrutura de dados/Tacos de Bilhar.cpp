/*
Tacos de Bilhar
https://neps.academy/br/course/10/lesson/277
Fonte: OBI 2016 - Primeira Fase
*/
#include <bits/stdc++.h>
using namespace std;

int n, res;
set <int> estoque;

int main() {
    cin >> n;
    for(int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
		if (estoque.count(temp)) estoque.erase(temp);
		else estoque.insert(temp), res += 2;
    }

    cout << res << endl;
}
