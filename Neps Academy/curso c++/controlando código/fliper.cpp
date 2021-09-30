#include<bits/stdc++.h>
int main(){
	int p,r;
	scanf("%d %d",&p,&r);
	if(p==1 && r==1)
		printf("A");
	else if(p==0)
		printf("C");
	else
		printf("B");
	return 0;
}
