#include <bits/stdc++.h>
#include <stdio.h>
int main(){
	int n_postes,postes,psub = 0,pcon =0;
	scanf("%d",&n_postes);
	for(int i = 0; i < n_postes; i++){
		scanf("%d",&postes);
		if(postes < 50 ){
			psub++;
		}else if(postes >= 50 && postes < 85){
			pcon++;
		}
	}
	printf ("%d %d", psub,pcon);
	return 0;
}

