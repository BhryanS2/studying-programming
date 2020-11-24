#include <bits/stdc++.h>
using namespace std;
int n, y; 
int v[1005]; 
int k[1005]; 
vector <int> r; 
int m[1005][1005]; 

int ord(int a, int b){

    return a > b; 
}

int main(){ 

    cin >> n; 

    for (int i = 0; i < n; i++) { 
        for (int j = 0; j < n; j++) {
            cin >> m[i][j];
        }
    }

    for (int i = 0; i < n; i++) { 
        for (int j = 0; j < n; j++) {
            v[i] += m[i][j];
            k[j] += m[i][j];
        }
    }

    for (int i = 0; i < n; i++) { 
        for (int j = 0; j < n; j++) {
            y = k[j] + v[i] - (2 * m[i][j]);
            r.push_back(y);
        }
    }


    sort(r.begin(), r.end(), ord); 
    cout << r[0]; 
    return 0; 
}
