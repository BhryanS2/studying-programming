#include<bits/stdc++.h>
int main() {
	int h, p, f, s;
	scanf("%d", &h);
	scanf("%d", &p);
	scanf("%d", &f);
	scanf("%d", &s);
	while (true) {
		if (p == h) {
			printf("N");
			break;
		} else if (f == h) {
			printf("S");
			break;
		} else if (f == p) {
			printf("N");
			break;
		} else {
			f += s;
			if (f > 15 && s == 1) {
				f = 0;
			} else if (f < 0 && s == -1) {
				f = 15;
			}
		}
	}
	return 0;
}
