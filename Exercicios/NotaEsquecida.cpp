#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b , m;
    cin >> a >> m;
    for(int  i = 1; i <= 100; i++){
        if((i + a) / 2 == m){
            cout << i << endl;
            break;
        }
    }
}
