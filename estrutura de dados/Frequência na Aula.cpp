/*
https://neps.academy/br/course/10/lesson/278
Frequência na Aula
Fonte: OBI 2012 - Primeira Fase
*/
#include <bits/stdc++.h>
using namespace std;

set<int> alunos;
int n;

int main(){
    cin >> n;

    for(int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        alunos.insert(temp);
    }

    //como o set não deixa elementos repetidos, basta mostrar o tamnho dele
    cout << alunos.size() << endl;
}
