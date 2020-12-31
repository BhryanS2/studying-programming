#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;

int main() {
	int v[110], i = 0, maior = 0;

	while (1) {
		i = i + 1;
		cin >> v[i];
		if (v[i] > maior) {
			maior = v[i];
		}
		if (v[i] == 0)break;
	}
	//	i = 0;
	//	while(1){
	//    	i= i + 1;
	//    	cout << v[i]<< " ";
	//    	if(v[i] == 0)break;
	//	}

	cout << maior;

	return 0;
}

