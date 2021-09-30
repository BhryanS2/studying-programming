/*
https://neps.academy/br/exercise/150
Maior Entre Três Números
*/
#include<bits/stdc++.h>
using namespace std;
int n;
vector <int> v;

int main() {
  for(int i = 0; i < 3; i++){
    cin >> n;
    v.push_back(n);
  }
  sort(v.begin(), v.end());
  cout << v[2];

	return 0;
}
