/*
Ordenação Simples
https://neps.academy/br/exercise/176
*/
#include <bits/stdc++.h>
#include <vector>
#include <iostream>
using namespace std;

int main() {
  int n, menor, aux;
  cin >> n;
  int v[n];
  /*
    for(int i = 0; i < n; i++){
      cin >> v[i];
      //cout << v[i] << " ";
    }
    cout << endl;

    for(int i = 0; i < n - 1; i++){
      menor = i;

      for(int j = i + 1; j < n; j++ ){
        if(v[menor] > v[j] )
            menor = j;
      }

      if(i != menor){
        aux = v[i];
        v[i] = v[menor];
        v[menor] = aux;
      }
    }

    for(int i =0; i < n; i++){
      cout << v[i] << " " ;
    }*/
  for (int i = 0; i < n - 1; i++) {
    sort(v, v + n);
    cout << v[i] << " ";
  }

  return 0;
}

/*
5
1 -7 1000 2 4
*/

