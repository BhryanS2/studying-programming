/*
https://neps.academy/br/exercise/335
Distância de Manhattan
Fonte: OBI 2013 - Segunda Fase
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
	long int x1, x2, y1, y2, distancia = 0;
	cin >> x1 >> y1 >> x2 >> y2;
	distancia = max(x1, x2) - min(x1, x2) + max(y1, y2) - min(y1, y2);
	cout << distancia;
	return 0;
}

