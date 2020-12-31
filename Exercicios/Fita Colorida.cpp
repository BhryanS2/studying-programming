#include <iostream>
using namespace std;
int main()
{
	int q, c;

	cin >> q;

	int v[q];

	for (int i = 0;i < q;i++) {
		cin >> v[i];
	}

	for (int i = 0;i < q;i++) {
		if (v[i] == 0) {
			for (int x = i;x < q;x++) {
				if (v[x] != 0) {
					c++;
					v[x] = min(9, c);
				}				
else {
					c = 0;
				}
			}
		}
	}

	for (int i = q - 1;i >= 0;i--) {

		if (v[i] == 0) {

			for (int a = i;a >= 0;a--) {

				if (v[a] != 0) {
					c++;
					if (v[a] == -1) {
						v[a] = min(9, c);
					}					
else {
						v[a] = min(v[a], c);
					}
				}				
else {
					c = 0;
				}
			}
		}
	}

	for (int i = 0;i < q;i++) {
		cout << v[i] << " ";
	}

	return 0;
}
