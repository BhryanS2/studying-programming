#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;
int main(){
	int l,r,d;
	cin >> l >> r >> d;
	if(r > 50 and (l < r) and (r > d)){
		cout<< "S" << endl;
	}else{
		cout << "N" << endl;
	}
	return 0;
}

