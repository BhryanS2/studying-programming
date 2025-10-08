/*

*/
#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> PII;

#define REP(i,n) for (int i=0; i<(n); ++i)
#define FOR(var,pocz,koniec) for (int var=(pocz); var<=(koniec); ++var)
#define FORD(var,pocz,koniec) for (int var=(pocz); var>=(koniec); --var)
#define PB push_back
#define MP(a,b) make_pair(a,b)
#define F first
#define S second

#define MAX 100000000

void quick_sort(int *vet,int l, int r) {
  int i = l, j = r;
  int pivo = vet[(l+r) / 2];
  while(i <= j) {
    while (vet[i] < pivo && i < r) i++;
    while (pivo < vet[j] && j > l) j--;
    if (i <= j) {
      swap(vet[i], vet[j]);
      i++;
      j--;
    }
  }
  if (l < j)quick_sort(vet, l, j);
  if (i < r) quick_sort(vet, i, r);
}

void quick_sort_desc(int *vet,int l, int r) {
  int i = l, j = r;
  int pivo = vet[(l+r) / 2];
  while(i <= j) {
    while (vet[i] > pivo && i < r) i++;
    while (pivo > vet[j] && j > l) j--;
    if (i <= j) {
      swap(vet[i], vet[j]);
      i++;
      j--;
    }
  }
  if (l < j)quick_sort_desc(vet, l, j);
  if (i < r) quick_sort_desc(vet, i, r);
}

int main() {
  int n;
  cin >> n;
  int imp[n], par[n];
  int count_i=0, count_p = 0;
  for (int i = 0; i < n; i++)
  {
    int s;
    cin >> s;
    if (s % 2 == 0) {
      par[count_p++] = s;
    }
    else imp[count_i++] = s;
  }
  quick_sort_desc(imp, 0, count_i - 1);
  quick_sort(par, 0, count_p - 1);
  for (int i = 0; i < count_p; i++)
  {
    if(par[i] != -1) cout << par[i] << endl;
  }

  for (int i = 0; i < count_i; i++)
  {
    if(imp[i] != -1) cout << imp[i] << endl;
  }

  return 0;
}


//g++ exe.cpp -o exe; cat input.txt | ./exe
