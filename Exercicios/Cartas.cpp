#include<bits/stdc++.h>
int main(){
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if(a==b){
		printf("%d",c);
	}
	if(b==c){
		printf("%d",a);
	}
	if(c==a){
		printf("%d",b);
	}
	return 0;
}
