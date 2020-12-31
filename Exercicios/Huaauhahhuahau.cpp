#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    string palavra, rev, norm;

    cin >> palavra;
    for (int i = 0; i < palavra.length(); i++)
        if (palavra[i] == 'a' || palavra[i] == 'e' || palavra[i] == 'i' || palavra[i] == 'o' || palavra[i] == 'u')
            rev = rev + palavra[i];

    for (int j = palavra.length() - 1; j >= 0; j--)
        if (palavra[j] == 'a' || palavra[j] == 'e' || palavra[j] == 'i' || palavra[j] == 'o' || palavra[j] == 'u')
            norm = norm + palavra[j];

    if (rev == norm) cout << "S" << endl;
    else cout << "N" << endl;

    return 0;
}