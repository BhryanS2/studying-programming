/*
Sequência Lógica 01
https://neps.academy/br/exercise/179
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	int b = 0;

	for (int a = 0; a <= 30; a++) {

		b++;
		if (b % 3 != 0) {
			cout << "a = " << a << " <->" << " b = " << b << endl;
			b++;
			cout << "a = " << a << " <->" << " b = " << b << endl;
		}
	}
	return 0;
}

