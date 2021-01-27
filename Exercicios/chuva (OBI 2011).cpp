/*
Chuva (OBI 2011)
https://neps.academy/br/exercise/533
Fonte: OBI 2011 - Segunda Fase
*/
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int a[105][105], b[105][105], soma[105][105];
int n;

int main() {
  cin >> n;

  for (int l = 0;l < n; l++)
    for (int c = 0;c < n; c++)
      cin >> a[l][c];

  for (int l = 0;l < n;l++)
    for (int c = 0;c < n;c++)
      cin >> b[l][c];

  for (int l = 0;l < n;l++)
    for (int c = 0;c < n;c++)
      soma[l][c] = a[l][c] + b[l][c];

  for (int l = 0;l < n;l++) {
    for (int c = 0;c < n;c++) {
      cout << soma[l][c];
    }
    cout << endl;
  }

}
