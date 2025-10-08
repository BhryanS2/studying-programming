#include <bits/stdc++.h>
using namespace std;

void MergeSort(char vet[], int tam)
{
  int mid;
  if (tam <= 1) return;
  mid = tam / 2;
  MergeSort(vet, mid);
  MergeSort(vet + mid, tam - mid);
  merge(vet, tam);
}

void merge(char vet[], int tam)
{
  int mid;
  int i, j, k;
  int tmp[tam];
  mid = tam / 2;
  i = 0;
  j = mid;
  k = 0;
  while (i < mid && j < tam) {
    if (vet[i] <= vet[j]) {
      tmp[k] = vet[i++];
    } else {
      tmp[k] = vet[j++];
    }
    k++;
  }
  if (i == mid) {
    while (j < tam) tmp[k++] = vet[j++];
  } else {
    while (i < mid) tmp[k++] = vet[i++];
  }
  for (i = 0; i < tam; ++i) {
    vet[i] = tmp[i];
  }
}

int main()
{


}
