#include "bits/stdc++.h"
using namespace std;

int main(){
    int n, soma = 0;
    cin >> n;

    int vetor[n + 5];
    for(int i = 0; i < n; i++) {
        cin >> vetor[i];
    }

    for(int i = 0; i < n; i++) {
        soma = soma + vetor[i];
        if (soma >= 1000000) {
            cout << i + 1 << endl;
            break;
        }
        // cout << vetor[i] << " ";
    }
}