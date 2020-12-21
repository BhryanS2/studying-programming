//O(N)
#include <bits/stdc++.h>

using namespace std;

vector< int > v(1000100);

int main(){

  int n, somaTotal, arr1, arr2;

  cin >> n;

  for (int i = 1; i <= n; i++){
    cin >> v[i];
  }

  cin >> somaTotal;

  for (int l = 1, r = n; l < r;){
    if (v[l] + v[r] == somaTotal){
      arr1 =  v[l];
      arr2 = v[r];
      break;
    }

    if (v[l] + v[r] < somaTotal){
      l++;
    }

    if (v[l] + v[r] > somaTotal){
      r--;
    }
  }

  cout << arr1 << " " << arr2 << endl;

  return 0;
}
