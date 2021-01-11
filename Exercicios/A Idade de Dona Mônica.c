#include <stdio.h>
int main() {
	int m, a, b, cont;

	scanf("%d %d %d",&m,&a,&b);

	cont = m - (a + b);

	if(cont>a && cont>b) printf("%d",cont);
	else if(b>cont && b>a) printf("%d",b);
	else printf("%d",a);

	return 0;
}
