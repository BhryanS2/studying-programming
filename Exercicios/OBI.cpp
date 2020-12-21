#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, m, x, y, cont;
	cin >> n >> m;
	for(int i = 0; i < n; i++){
		cin >> x >> y;
		if(x + y >= m){
			cont++;
		}
	}
	
	cout << cont;
	return 0;
}

