/*
Times
https://neps.academy/br/course/10/lesson/268
Fonte: OBI 2010 - Primeira Fase
*/
#include <bits/stdc++.h>
using namespace std;
#define MAX 1005
int n, t;

/*
entrada
N e T, representando respectivamente a quantidade de alunos e o número de times a serem formados,
sendo T <= N
Não existem dois alunos com o mesmo nível de habilidade,
e todos eles possuem nomes diferentes.
É possível que alguns times acabem ficando com menos jogadores do que os outros.

saída:
 Para cada time, você deverá mostrar o termo "Time N", onde N é o número do time (1 para o primeiro, 2 para o segundo, e assim por diante) seguido de K linhas, onde K é a quantidade de jogadores do time, mostrando o nome de cada um dos jogadores do time, em ordem alfabética. Imprima uma linha em branco após cada descrição de time (inclusive do último).
*/

int main() {
    vector< pair<int, string> > v;
    vector <string> time[MAX];
    cin >> n >> t;
    for (int i = 0; i < n; i++) {
        pair<int, string> temp;
        cin >> temp.second >> temp.first;
        v.push_back(temp);
    }

    sort(v.begin(), v.end());

    //vendo se tudo foi lido e organizado
    //for (int i = 0; i < n; i++) cout << "first: " << v[i].first << " second: " << v[i].second << endl;

    int qual_time = 1;

    for (int i = v.size() - 1; i >= 0; i--) {

        time[qual_time].push_back(v[i].second);
        qual_time++;

        if (qual_time > t) qual_time = 1;
    }

    for (int i = 1; i <= t; i++) {
        cout << "Time " << i << endl;

        sort(time[i].begin(), time[i].end());

        for (int j = 0; j < time[i].size(); j++) cout << time[i][j] << endl;

        cout << endl;
    }
}
