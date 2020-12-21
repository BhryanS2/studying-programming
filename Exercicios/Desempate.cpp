#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,cont;
	int v[1000];
	cin >> n;
	for(int i = 1; i <= n;i++){
		cin >> v[i];
		if(v[i] >= 1){
			if(v[i] == v[i - 1]){
				cont++;
			}
		}
	}
	cout << cont << endl;
	return 0;
}
