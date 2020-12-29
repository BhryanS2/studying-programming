#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b , m;
    cin >> a >> m;
    int i = 0;
    while(1){
        if((i + a) / 2 == m){
            cout << i << endl;
            break;
        }
        i++;
    }
}
