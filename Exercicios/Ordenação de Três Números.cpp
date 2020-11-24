#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;
int main(){
	int v[4];
	for(int i =0; i< 3;i++)cin >> v[i];
	sort(v, v +3);
	for(int i =0; i< 3;i++)cout << v[i]<<endl;
	return 0;
}

