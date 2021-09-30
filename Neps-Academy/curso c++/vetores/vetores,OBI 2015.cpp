#include<bits/stdc++.h>
int main(){
	int n,cont=0;
	scanf("%d",&n);
	int v[n];
	for(int i=0;i<n;i++){
		scanf("%d",&v[i]);
	}
	for(int i=0;i<n-2;i++){
		if(v[i]==1){
			if(v[i+1] == 0 && v[i+2] == 0){
				cont++;
			}
		}
	}
	printf("%d",cont);
	return 0;
}
