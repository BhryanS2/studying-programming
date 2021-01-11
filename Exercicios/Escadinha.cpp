#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, res = 1, x;
    cin >> n;
    vector<int>arr;

    for(int  i = 0; i < n; i++) {
        cin >> x;
        arr.push_back(x);
    }

    for(int  i = 2; i < n; i++){
        if( (arr[i] - arr[i - 1]) != (arr[i - 1] - arr[i - 2])) res++;
    }

    cout << res << endl;
}
