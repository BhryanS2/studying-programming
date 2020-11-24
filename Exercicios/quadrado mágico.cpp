#include<bits/stdc++.h>
#include<stdio.h>
#include<iostream>
int main(){
	int somal = 0,somac = 0,diagonal_P = 0,diagonal_S = 0;
	int matriz[15][15],matrizl[15],matrizc[15];
	for(int l = 0;l < 3;l++){
		for(int c = 0;c <3;c++){
			scanf("%d",&matriz[l][c]);
		}
	}
	
	printf("\n");
	
	//somando linhas
	for(int l = 0;l < 3;l++){
		somal = 0;
		for(int c = 0;c <3;c++){
			somal += matriz[l][c]; 
		}
		matrizl[l]=somal;
	}
	//somando colunas
	
	for(int c = 0;c <3;c++){
		somac = 0;	
		for(int l = 0;l <3;l++){
			somac += matriz[l][c];
		}
		matrizc[c]=somac;
	}
	
	//somando a diagonal principal
	for(int l = 0; l <3; l++ ){
		diagonal_P += matriz [l][l];
	}
	
	//soamndo a digonal segundaria
	for(int l = 0;l <3;l++){
		for(int c = 0;c <3;c++){
			if((l + c) == (3-1)){
				diagonal_S +=  matriz[l][c];
			}
		}
		printf("\n");
	}
	/*
	//exibe matriz
	printf("\n matriz \n");
	for(int l = 0;l <3;l++){
		for(int c = 0;c <3;c++){
			printf("%d ",matriz[l][c]);
		}
		printf("\n");
	}
	
	//exibe soma das linhas
	printf("\n linhas \n");
	printf("%d \n",somal);
	
	//exibe soma das colunas
	printf("\n colunas \n");
	printf("%d \n",somac);
	
		
	//exibe soma da diagonal principal
	printf("\n diagonal principal \n");
	printf("%d \n",diagonal_P);
	
	
	//exibe soma da diagonal segundaria
	printf("\n diagonal segundaria \n");
	printf("%d \n",diagonal_S);
	*/
	
	if( (somal == somac) && (diagonal_P == diagonal_S) && ( diagonal_P == somal) ){
		printf("SIM");
		
	}else {
		printf("NAO");
 	}
	return 0;
}
/*
4
16 3 2 13
5 10 11 8
9 6 7 12
4 15 14 1

3
1 2 3
4 5 6
7 8 9
*/
