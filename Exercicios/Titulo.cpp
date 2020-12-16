#include <iostream>
using namespace std;

string title(string F){
	string Tolowercase;
	for(int i=0; i < F.size(); i++){
		Tolowercase += F[i];
	}
	return Tolowercase;
}

int main(){ 
	string F;

	getline(cin, F);

	cout << title(F) << "\n";
}

