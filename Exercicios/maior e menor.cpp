#include <bits/stdc++.h>
using namespace std;
int main(){
	int v[1000],n,maior,menor;
	cin >> n;
	
	for(int i =0; i< n;i++)cin >> v[i];
	
	sort(v, v + n);
	
	for(int i =0; i< n;i++){
		if ( i == 0){
			menor = v[i];
		}
		if(i == (n - 1)){
			maior = v[i];
		}
	}
	
	cout <<maior <<endl<< menor<<endl;
	
	return 0;
}

