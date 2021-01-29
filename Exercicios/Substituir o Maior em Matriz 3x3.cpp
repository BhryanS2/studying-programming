/*
Substituir o Maior em Matriz 3x3
https://neps.academy/br/exercise/202
*/
#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int m[5][5];
int maior[3];

int main() {

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cin >> m[i][j];
      maior[j] = m[0][0];
    }
  }

  for (int i = 0; i < 3; i++)
    for (int j = 0; j < 3; j++)
      if (m[i][j] > maior[j]) maior[j] = m[i][j];

  sort(maior, maior + 3);
  //    cout << endl;
  //	for(int i = 0; i < 3; i++){
  //        cout << maior[i] << endl;
  //    }
  for (int i = 0; i < 3; i++)
    for (int j = 0; j < 3; j++)
      if (m[i][j] == maior[2]) m[i][j] = -1;

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) cout << m[i][j] << " ";
    cout << endl;
  }

}
/*
2 7 6
9 5 1
4 3 8
*/
