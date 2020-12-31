#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, j = 0, Numinverso = 0;

    cin >> n;
    vector<int> v1(n), v2(n), v_aux(n);//crio um vetor do tamanho do meu n

    for (int i = 0; i < n; i++) {
        cin >> v1[i];
        v2[i] = v1[i];//Crio uma copia do primeiro vetor
    }
    //Ordeno ele pra comparar
    sort(v2.begin(), v2.end());
    //1 7 3 5 1 -> v1
    //1 1 3 5 7 -> v2
    for (int i = 0; i < n; i++) {
        if (v1[i] != v2[i]) {//se sao diferentes e aqui que eu inverto
            Numinverso++;//conto +1 no numero de inversoes
            v_aux[j++] = v2[i];//e recebo esse valor
        }
    }

    cout << Numinverso << endl;//mostro quantas inversoes foram feitas
    for (int i = 0; i < Numinverso; i++)
        cout << v_aux[i] << " ";//e depois mostro os valores
    cout << endl;

    return 0;
}

