#include <bits/stdc++.h>
#include <stdio.h>
int main(){
	int n,presente,d2 =0 ,d3 = 0,d4 = 0;
	scanf("%d",&n);
	for(int i = 0; i < n; i++){
		scanf("%d",&presente);
		if(presente % 2 == 0){
			d2++;
		}
		if(presente % 3 == 0){
			d3++;
		}
		if(presente % 4 == 0){
			d4++;
		}
	}
	printf("%d\n%d\n%d\n",d2,d3,d4);
	return 0;
}

