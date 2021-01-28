/*
https://neps.academy/br/exercise/148
Par ou Ímpar

*/
#include <bits/stdc++.h>
using namespace std;
int main() {
    int bino, cino;
    cin >> bino >> cino;
    int soma = bino + cino;

    cout << (soma % 2 == 0 ? "Bino" : "Cino") << endl;
}
