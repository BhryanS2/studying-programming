#include<bits/stdc++.h>
#include<cmath>
#include<iostream>
using namespace std;
int main(){
	int x,c;
	scanf("%d",&x);
	int v[x];
	for(int i=0;i<x;i++){			//enquanto i menor que x some um a i
		scanf("%d",&v[i]);			//entre com valores para o vetor i
	}
	for(int i=0;i<x;i++){			//enquanto i menor que x some um a i
		if(v[i]==0){				//se vetor i igual a 0 faça
			for(int q=i;q<x;q++){ 	//q receber i e enquanto q menor que x some um ao q
				if(v[q]!=0){		// se vetor q diferente de 0
					c++;			//some um ao c
					v[q]=min(9,c);	//vetor q recebe minimo de 9 e c
				}else{    			//senão 	
					c=0; 			//c recebe 0
				}
			}
		}
	}
	for(int i=x-1;i>=0;i--){ 		// i recebe x-1,enquanto imaior igual a 0 i menos 1
		if(v[i]==0){				//se vetor i igual a 0
			for(int a=i;a>=0;a--){ 	// a recebe i, enquanto a maior igual a 0 a menos 1
				if(v[a]!=0){ 		// se vetor a diferente de 0
					c++;			// c soma 1
					if(v[a]==-1){	//se vetor a igual a -1 
					v[a]=min(9,c);	// vetor a recebe minimo de 9 e c
				}else{				//senão
					v[a]=min(v[a],c);//vetor a recebe minimo de vetor a e c
				}
				}else{				//senão
					c=0;			//c rebe 0
				}
			}
		}
	}	
	for(int i=0;i<x;i++){ 			//enquanto i menor que x i rece e soma 1
		printf("%d",v[i]);			// imprima vetor i
	}
	return 0;
}
