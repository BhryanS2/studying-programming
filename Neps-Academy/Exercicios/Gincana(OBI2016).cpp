/*
https://neps.academy/br/exercise/3
Gincana (OBI 2016)
Fonte: OBI 2016 - Segunda Fase
*/
#include <bits/stdc++.h>

using namespace std;

long long int func(long long int a, long long int b) {
	if (b == 0) return a;
	else return func(b, a % b);
}

int main() {
	long long int n, m;

	cin >> n >> m;

	while (func(n, m) != 1)
		m--;

	cout << m << endl;

	return 0;
}

