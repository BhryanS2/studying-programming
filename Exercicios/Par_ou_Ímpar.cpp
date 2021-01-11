#include <bits/stdc++.h>
using namespace std;
/*
https://neps.academy/br/course/22/lesson/598
Par ou Ímpar
*/
int main() {
    int bino, cino;
    cin >> bino >> cino;
    int soma = bino + cino;
    
    cout << (soma % 2 == 0 ? "Bino" : "Cino") << endl;
}