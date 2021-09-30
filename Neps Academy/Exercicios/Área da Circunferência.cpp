/*
https://neps.academy/br/exercise/144
Área da Circunferência
*/
#include<bits/stdc++.h>
#include<cmath>
int main() {
	float r, aux;
	scanf("%f", &r);
	//A = pR2
	aux = pow(r, 2);
	aux = aux * 3.1416;
	printf("%.2f", aux);
	return 0;
}
