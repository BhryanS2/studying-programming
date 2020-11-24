#include<bits/stdc++.h>
int main(){
	int n,num,maior,p;
	scanf("%d",&n);
	for(int i=0;i!=n;i++){
		scanf("%d",&num);
		if(maior>num||maior==num){
			p++;
		}else{
			p=0;
		}
		
		maior=num;
	}
	printf("%d ",p);
	return 0;
}
