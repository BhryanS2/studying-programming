#include<bits/stdc++.h>
#include<iostream>
int main(){
	int l,c;// L de linhas e c de colunas 
	int matriz [3][2];
	for(l = 0;l < 3;l++){
		for(c =0; c < 2;c++){
			scanf("%d",&matriz [l][c]);
		}
	}
	// A cima lemos um valor para cada linha e para cada coluna
	for(l = 0;l < 3;l++){
		for(c =0; c < 2;c++){
			printf("%d ",matriz [l][c]);
		}//com isso aqui imprimimos os valores de dentro da matris
		printf("\n");//esse printf é para que a matriz possa ser reproduzia como tal
	}
}
