#include<bits/stdc++.h>
int main(){
	int n,a=0,b=0,s,in;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&in);
		if(in==1){
			if(a==0){
				a=1;
			}else{
				a=0;
			}	
		}
		if(in==2){
			if(a==0){
				a=1;
			}else{
				a=0;
			}
			if(b==0){
				b=1;
			}else{
				b=0;
			}
		}
	}
	printf("%d",a);
	printf("%d",b);
	return 0;
}

