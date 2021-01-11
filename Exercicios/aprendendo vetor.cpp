#include<bits/stdc++.h>
int main(){
	int a[10],b[10];
	for(int i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
	
	for(int i=0;i<10;i++){
		printf("\n a[%d] = %d\n ",i,a[i]);
	}
	printf("\n\n*******************************\n\n");
	for(int i=0;i<10;i++){
		b[i]= a[i]*10;
		printf("\n b[%d] = %d\n ",i,b[i]);
	}
	
	return 0;
}
