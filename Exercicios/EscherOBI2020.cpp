#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main() {
    int n, a, soma;
	bool cont = false;
    vector <int> v;
    cin >> n;
    for(int i = 0; i < n; i ++){
        cin >> a;
        v.push_back(a);
    }
    
    soma = v[0] + v[v.size() - 1];
    
    for(int i = 0; i < v.size(); i ++){
        if(v[i] + v[n - 1 - i] == soma){
        }
    }
    
    cout << (cont ? 'S': 'N') << endl;
}
