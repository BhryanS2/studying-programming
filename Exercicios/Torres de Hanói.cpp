#include <iostream>

using namespace std;

int hanoi(int n){
	if (n == 1){
		return 1;
	}

	return hanoi(n - 1) * 2 + 1;

}

int main(){
	int num = 1;
	int cont = 1;
	while (num != 0){
		cin >> num;
		if (num == 0){
			exit(0);
		}
		cout << "Teste " << cont << endl << hanoi(num) << endl << endl;
		cont += 1;
	}

	return 0;
}
