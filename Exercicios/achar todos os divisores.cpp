#include<bits/stdc++.h>
int main(){
	int x,y;
	scanf("%d",&x);
	y=1;
	while(y<=x){
		if(x%y==0){
			printf("\n %d \n",y);
		}
	y=y+1;
	}
	
	return 0;
}
