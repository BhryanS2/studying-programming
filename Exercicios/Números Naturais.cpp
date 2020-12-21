#include <bits/stdc++.h>
using namespace std;

int soma(int x){
	if(x == 1){
		return x;
	}
	return soma(x - 1) + x;
}

int main(){
	int n;
	cin >> n;
	cout << soma(n);
	
	return 0;
}

