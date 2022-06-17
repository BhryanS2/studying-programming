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

int ma[100][100];

int ans;

void printMatriz(int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << ma[i][j] << " ";
        }
        cout << endl;
    }
}

void marcar(int li, int ci, int lf, int cf) {
    for(int i = li; i <= lf; i++) {
        for(int j = ci; j <= cf; j++) {
            ans += ma[i][j];
            ma[i][j] = -1;
        }
    }
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> ma[i][j];
        }
    }
    printMatriz(n);

    int q;
    cin >> q;

    for (int i = 0; i < q; i++) { 
        int li, ci, lf, cf;
        cin >> li >> ci >> lf >> cf;
        marcar(li, ci, lf, cf);
    }

    cout << "\n";

    printMatriz(n);

    cout << ans << endl;
    return 0;
}


//g++ exe.cpp -o exe && exe < input.txt
