#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
	int n, cont = 0, cont2 = 0;
	string linha, lado1,lado2;
	cin >> n;
	
	for(int i = 0; i <= n; i++){
	    getline(cin, linha);
	    for(int j = 0; j < linha.size(); j++ ){	
			if(linha[j] == '{') {
				cont++;
				lado1 += linha[j];
			}
			if(linha[j] == '}'){
				cont2++;
				lado2 += linha[j];
			}
		}
	}
	
	if(cont % 2 == 0){
		cout << lado1 << endl;
	}else{
		cout << lado2 << endl;
	}
	return 0;
}

