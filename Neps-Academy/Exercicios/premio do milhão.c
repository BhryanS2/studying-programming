/*
https://neps.academy/br/exercise/48
Prêmio do Milhão
Fonte: OBI 2015 - Primeira Fase
*/
#include<bits/stdc++.h>
int dias,i,v,soma;

int main(){
	soma=0;//soma recebe 0;

	scanf("%d",&dias);//leio os dias

	for(i=0;soma<1000000 && i<=dias;i++){
		//i recebe 0,enquanto soma menos que um milhão e i menor iqual a dias
		scanf("%d",&v);
		soma=soma+v;
	}
	printf("%d",i);
	return 0;
}

