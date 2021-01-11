#include <bits/stdc++.h>
#include <cmath>
int main(){
	int linhas=0;
	double n,n1,n2;
	scanf("%d",&linhas);
	for(int i=1;i<=linhas;i++){
		scanf("%lf",&n);
		n1=n;
		n2=sqrt(n1);
		printf("%.4lf\n",n2);
	}
	return 0;
}
