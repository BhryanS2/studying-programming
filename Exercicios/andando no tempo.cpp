/*
Andando no Tempo
https://neps.academy/br/exercise/111
Fonte: Maratona de Programação da SBC 2016
*/

#include <bits/stdc++.h>
using namespace std;
int main(){
	int n1,n2,n3;
	cin >> n1 >> n2 >> n3;
	if(n1 - n2 == 0 || n1 - n3 == 0 || n2 - n3 == 0){
		cout << "S" << endl;
	} else if((n1 + n2) - n3 == 0 || (n1 + n3) - n2 == 0 ||(n2 + n3) - n1 == 0 ){
		cout << "S" << endl;
	} else{
		cout << "N" << endl;
	}
	return 0;
}

