/*
https://neps.academy/br/exercise/396
Busca Simples no Vetor 02

*/
#include <bits/stdc++.h>
using namespace std;

int main(){
	vector<int> v(10);

	for(int i = 0; i < 10; i++) cin >> v[i];

	int x, cont = 0;
	cin >> x;
	vector<int> v2(15);

	for(int i = 0; i < 10; i++)
		if(v[i] == x)
			cont++;

	if(cont == 0) cout << "Mia x";

	else{
		cout << cont << endl;
		for(int i = 0; i < v2.size(); i++)
			if(v[i] == x)
				cout << i << " ";
	}

	return 0;
}

