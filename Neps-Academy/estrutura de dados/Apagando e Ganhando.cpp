/*
https://neps.academy/br/course/10/lesson/271
Apagando e Ganhando
*/
#include <bits/stdc++.h>
using namespace std;

char pilha[100100];
int n, d;

int main() {

    while (cin >> n >> d && (n + d)) {
        int apagados = 0, topo = -1;
        for (int i = 0; i < n; i++) {
            char num;
            cin >> num;

            /*enquanto houver algum número na pilha, ainda não houver d apagados
             e o algarismo atual for maior que o topo da pilha*/
            while (topo > -1 && apagados < d && num > pilha[topo]) {
                topo--;
                apagados++;
            }

            // se o tamanho da pilha for menor que n-d
            // insiro o  novo número na pilha
            if (topo + 1 < n - d) pilha[++topo] = num;
        }

        // por fim, adiciono '\0' ao fim da pilha
        pilha[++topo] = '\0';
        cout << pilha << endl;
    }

    return 0;
}
