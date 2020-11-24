#include <bits/stdc++.h>
#include <stdio.h>
int main(){
	int a,b,maior,menor,i;
	scanf("%d%d",&a,&b);
	if(a > b){
       maior = a;
       menor = b;
	}
	else{
	   menor = a;
	   maior = b;
	} 
	i = menor;
	do{
		printf("%d ", i);
		i++;
	}while(i <= maior);
	return 0;
}

