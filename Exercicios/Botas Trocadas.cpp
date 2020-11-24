#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;
int main(){
	int n,m;
	char l;
	int total = 0, vetorD[65],vetorE[65];
	cin >> n;
	//zerando vetor para contagem
	for(int i= 30; i <= 60; i++){
		vetorD[i] = 0;
		vetorE[i] = 0;
	}
	//lendo botas
	for(int i = 0; i < n; i++){
		cin >> m >> l;
		if(l == 'E') vetorE[m]++;
		else vetorD[m]++;
		
	}
	
	// somando
	for(int i = 30;i <= 60; i++){
		if(vetorD[i] < vetorE[i]) total += vetorD[i];
		else total += vetorE[i];
	}
	//imprimindo total
	cout << total;
	return 0;
}

