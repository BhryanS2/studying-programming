/*
https://www.beecrowd.com.br/judge/pt/problems/view/1907
Coloração de Cenários de Jogos
beecrowd | 1907
Passou
*/

#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> PII;

#define REP(i,n) for (int i=0; i<(n); ++i)
#define FOR(var,pocz,koniec) for (int var=(pocz); var<=(koniec); ++var)
#define FORD(var,pocz,koniec) for (int var=(pocz); var>=(koniec); --var)
#define PB push_back
#define MP(a,b) make_pair(a,b)
#define F first
#define S second

#define MAX 100000000


int dirx[4] = {0,0,1,-1};
int diry[4] = {1,-1,0,0};

int n, m, r;
char matriz[1030][1030];

bool verifica(int x, int y){
    return x >= 0 && x < n && y >= 0 && y < m;
}

void dfs(int i, int j){
    matriz[i][j] = 'o';
    for(int k = 0; k < 4; k++){
        if(verifica(i + dirx[k], j + diry[k])){
            if(matriz[i + dirx[k]][j + diry[k]] == '.') dfs(i + dirx[k], j + diry[k]);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int m, n, i = 0, j = 0;
    cin >> m >> n;
    char a[m + 1][n + 1];
    REP(i, m) {
        REP(j, n) {
            cin >> a[i][j];
        }
    }

    // contar cores
    
    REP(i, m) {
        REP(j, n) {
            cout << a[i][j];
        }
        cout << endl;
    }
    return 0;
}


//g++ exe.cpp -o exe && exe < input.txt
