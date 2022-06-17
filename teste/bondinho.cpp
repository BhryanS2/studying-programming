#include "bits/stdc++.h"
using namespace std;

int main(){
    int a, m, soma=0;
    cin >> a >> m;

    soma = a + m;

    if(soma <= 50){
        cout << "S" << endl;
    } else{
        cout << "N" << endl;
    }
}