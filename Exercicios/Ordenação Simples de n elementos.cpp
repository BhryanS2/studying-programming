/*
Ordenação Simples
https://neps.academy/br/exercise/176
*/
#include <iostream>
#include <algorithm>
using namespace std;
int n;
int v[100005];

int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	sort(v, v + n);
	for (int i = 0; i < n; i++) {
		cout << v[i] << " ";
	}

	return 0;
}


