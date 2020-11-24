#include<bits/stdc++.h>
int main(){
	int n,cont,b,i=0;
	scanf("%d",&n);
	while(b<10){
		i++;
		cont=n*i;
		b++;
		printf("%d * %d = %d\n",n,b,cont);
	}
	return 0;
}
