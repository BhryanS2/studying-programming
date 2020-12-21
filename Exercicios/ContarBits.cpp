#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int cont = 1; 
    
    while(1){
    	if(n % 2 == 1) cont++;
		
		if(n / 2 <= 1)break;
		
		n = n / 2;
    }
    
    cout << cont;
}
