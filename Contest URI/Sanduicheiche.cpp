#include <bits/stdc++.h>
#include <string>
using namespace std;

int main () {

	string text;

	while (cin >> text) {
		int size = text.size(), i = 0;

		for (i = 1; i <= size ; i++) {
			string sub = text.substr(size - i, i);

			if (text.substr(0, text.size() - i).find(sub) == string::npos) {
				i--;
				break;
			}
		}

		cout << text.substr(0, size - i) << endl;
	}

	return 0;
}
