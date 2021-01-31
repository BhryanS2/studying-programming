/*numero de premiação: 3, numero de ogros: 4
faixa de premiação: 3, 5
representando a premiação de cada faixa de premiação: 1 4 7
representando qual força cada ogro: 2 3 9 4

https://neps.academy/br/exercise/261
Ogros
Fonte: OBI 2008 - Primeira Fase
*/

#include <bits/stdc++.h>
using namespace std;
vector<int> FaixaPreimo, RepresentacaoPremio, Ogros, FilaFinal;

int main() {
    int n, m, x;

    cin >> n >> m;

    for (int i = 0; i < n - 1; i++){
        cin >> x;
        FaixaPreimo.push_back(x);
    }

    for (int i = 0; i < n; i++){
        cin >> x;
        RepresentacaoPremio.push_back(x);
    }

    for (int i = 0; i < m; i++) {
        cin >> x;
        Ogros.push_back(x);
    }

    for(int i = 0; i < Ogros.size(); i++){
        if(Ogros[i] == FaixaPreimo[0]){
            FilaFinal[i] = FaixaPreimo[0];
        }
    }

    for(int i = 0; i < Ogros.size(); i++){
        cout << FilaFinal[i] << " ";
    }
}
