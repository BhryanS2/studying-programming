#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int ordD(int a, int b){
    return b > a;
}

int ordC(int a, int b){
    return a > b;
}
vector<int> v(10);

int main(){
    for(int  i = 0; i < 10; i++){
        cin >> v[i];
    }

    sort(v.begin(), v.end(), ordD);

    for(int i = 0; i < 10; i++){
        cout << v[i] << " ";
    }

    sort(v.begin(), v.end(),ordC);

    cout << endl;
    for(int i = 0; i < 10; i++){
        cout << v[i] << " ";
    }
}
//9 5 8 2 3 7 0 1 4 6
