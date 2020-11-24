#include<bits/stdc++.h>
#include<stdio.h>
int main(){
	double num1,num2,aux,aux2;
	char sinal;
	scanf("%s",&sinal);
	scanf("%lf",&num1);
	scanf("%lf",&num2);
	if(sinal=='M'){
		aux=num1*num2;
		printf("%.2lf",aux);
	}
	if(sinal=='D'){
		aux2=num1/num2;
		printf("%.2lf",aux2);
	}
	
	return 0;
}
