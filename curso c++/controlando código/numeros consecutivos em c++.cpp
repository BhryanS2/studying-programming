#include<bits/stdc++.h>
int main(){
	int N,i,cont=1,resposta=0, v,aux=0;
	scanf("%d",&N);
    for(i = 0; i < N; i++){
		scanf("%d",&v);
		 if(aux == v){
            cont++;
        }else{
            cont = 1;
        }
        aux = v;
	}
	printf("%d",cont);
	return 0;
}
