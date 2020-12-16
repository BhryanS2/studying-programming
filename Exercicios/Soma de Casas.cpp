#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
	int n, somaTotal = 0, somaArr = 0, valueArr1 = 0, valueArr2 = 0;
	cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	
	cin >> somaTotal;
	
//	for(int i =0; i < n; i++){
//		cout << arr[i] << endl;
//	}
//	
//	cout << somaTotal<<endl;

	int i = 0, j = 1;

	while(1){
		
		if(i == (n - j)) {
			i = 0;
			j = j + 1;
		}
		
		somaArr = arr[i] + arr[i + j];
		
		if(somaArr == somaTotal){
			valueArr1 = arr[i];
			valueArr2 = arr[i + j];
			break;
		}
		
		i++;
	}
	
	int aux;
	
	if(valueArr1 > valueArr2){
		aux = valueArr1;
		valueArr1 = valueArr2;
		valueArr2 = aux;
	}
	cout << valueArr1 << " " << valueArr2 << endl;
	
	return 0;
}
/*
5

4 6 9 10 12 

14

*/
