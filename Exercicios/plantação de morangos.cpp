#include <bits/stdc++.h>
using namespace std;
int main(){
	int comp1,larg1,comp2,larg2,total1,total2;
	
	cin >>comp1>>larg1>>comp2>>larg2;
	
	total1 = comp1 * larg1;
	total2 = comp2 * larg2;
	
	if(total1 > total2) cout << total1;
	else cout << total2;
	
	return 0;
}

