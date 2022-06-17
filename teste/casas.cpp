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

int main() {
    int n, k;
    cin >> n;

    int v[n + 5];

    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    
    cin >> k;

    int casa1 = 0, casa2 = 0;
    int esquerda = 0, direita = n - 1;
    while(esquerda < direita) {
        if (v[esquerda] + v[direita] == k) {
            casa1 = v[esquerda];
            casa2 = v[direita];
            break;
        }

        if(v[esquerda] + v[direita] > k) {
            direita--;
        } 
        
        if(v[esquerda] + v[direita] < k) {
            esquerda++;
        }
    }

    cout << casa1 << " " << casa2 << endl;


    return 0;
}


//g++ exe.cpp -o exe && exe < input.txt
