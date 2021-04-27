// implementação do selection sort
#include <bits/stdc++.h>
using namespace std;

void swap(int* xp, int* yp) {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void selectionSort(int arr[], int n) {
    int i, j, min_idx;

    //  Limite de movimento um a um do array não classificado
    for (i = 0; i < n - 1; i++) {
        // Encontre o elemento mínimo em uma matriz não classificada
        min_idx = i;
        for (j = i + 1; j < n; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;

        // Troque o elemento mínimo encontrado pelo primeiro elemento
        swap(&arr[min_idx], &arr[i]);
    }
}

// imprime o array
void printArray(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

// Programa de driver para testar as funções acima
int main() {
    int arr[] = { 64, 25, 12, 22, 11 };

    int n = sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr, n);

    cout << "Array ordenado: \n";
    printArray(arr, n);
    return 0;
}
