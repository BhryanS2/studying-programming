#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main() {
    int n, a, soma, meio;
    //o bool  faz com que a variavel receba veradeiro ou falso
    bool cont = false;
    //um array dinamico
    vector <int> v;
    //leitura do tamnho do array
    cin >> n;
    //leio o valor de a e pusho para ultima posição do vetor
    for (int i = 0; i < n; i++) {
        cin >> a;
        v.push_back(a);
    }
    //pego a soma do primeoro número e do último
    soma = v[0] + v[v.size() - 1];
    //se N é par faço um for, senão faço outro
    if (n % 2 == 0) {
        for (int i = 0; i < v.size(); i++) {
            // se o numero na pisição i mais o vetor na poisição -i for iqual a soma ele recebe true
            if (v[i] + v[n - 1 - i] == soma) {
                cont = true;
            }
        }
    }
    else {
        //pego o meio se número for ímpar
        meio = (n + 1) / 2;
        for (int i = 0; i < v.size(); i++) {
            if (v[meio] == soma) {
                if (v[i] + v[n - 1 - i] == soma) {
                    cont = true;
                }
            }
        }
    }

    cout << (cont ? 'S' : 'N') << endl;
}
