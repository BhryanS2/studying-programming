#include<bits/stdc++.h>
#include<iostream>
int main(){
	int a[105][105],b[105][105],soma[105][105];
	int n;
	scanf("%d",&n);
	for(int l = 0;l < n;l++){
		for(int c = 0;c < n;c++){
			scanf("%d",&a[l][c]);
		}
	}
	for(int l = 0;l < n;l++){
		for(int c = 0;c < n;c++){
			scanf("%d",&b[l][c]);
		}
	}
	for(int l = 0;l < n;l++){
		for(int c = 0;c < n;c++){
			soma[l][c] = a[l][c] + b[l][c];
		}
	}
	for(int l = 0;l < n;l++){
		for(int c = 0;c < n;c++){
			printf("%d ",soma[l][c]);
		}
		printf("\n");
	}
}
