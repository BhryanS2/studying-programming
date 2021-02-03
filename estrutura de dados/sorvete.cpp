/*
https://neps.academy/br/course/10/lesson/269
Sorvete
Fonte: OBI 2001 - Fase Única
*/
#include <bits/stdc++.h>
using namespace std;

/*
 cada sorveteiro passa o dia percorrendo uma mesma região da praia, indo e voltando. Além disto, cada sorveteiro percorre todos os dias a mesma região.

 P = comprimento da praia em metros
 S =  número de sorveteiros
 U e V que descrevem o intervalo de trabalho de cada um dos sorveteiros
*/

int main(void) {
    vector< pair<int, int> > v;
    pair<int, int> sorveteiros;

    int P, S;
    int min, max;

    cin >> P >> S;

    for (int i = 0; i < S; i++) {
        cin >> sorveteiros.first >> sorveteiros.second;
        v.push_back(sorveteiros);
    }

    sort(v.begin(), v.end());

    min = v[0].first;
    max = v[0].second;

    for (int i = 1; i < S; i++) {
        if (v[i].first > max) {
            cout << min << " " << max << endl;
            min = v[i].first;
            max = v[i].second;
        }
        else if (v[i].second > max) max = v[i].second;
    }

    cout << min << " " <<  max << endl;

    return 0;
}
