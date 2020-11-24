#include <bits/stdc++.h>

using namespace std;

int main(){
    int x;
    vector <int> r;

    cin >> x;

    while (true){
        int res = x%2;
        x = x/2;
        r.push_back(res);
        if(x == 0) break;
    }

    for( int i = r.size()-1; i >= 0 ; i--) cout<<r[i];

    return 0;
}
