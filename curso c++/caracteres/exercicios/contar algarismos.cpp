#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
	int n, v[10] = { 0 };
	string num;
	cin >> n;
	
	for(int i = 0; i < n; i++){
		cin >> num;
		for (int j = 0; j < num.size(); j++ ) 
			v[ num[j] - '0']++;
	}
	for (int i = 0; i < 10; i++ ){
		cout << i << " - " << v[i] << endl;
	}
	return 0;
}

