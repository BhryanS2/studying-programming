#include <stdio.h>

void Sawp(int array[], int i, int j) {
    int aux = array[i];
    array[i] = array[j];
    array[j] = aux;
}

int partition(int array[], int left, int right) {

    int indexPivot = (left + right) / 2;

    // swap first and pivot
    Sawp(array, left, indexPivot);

    int pivot = array[left];
    int i = left;

    for (int j = i + 1; j <= right; j++) {
        if (array[j] <= pivot) {
            i += 1;
            Sawp(array, i, j);
        }
    }
    Sawp(array, left, i);

    return i;
}

void quickSort(int array[], int left, int right) {
    if (left < right) {
        int index_pivot = partition(array, left, right);
        quickSort(array, left, index_pivot - 1);
        quickSort(array, index_pivot + 1, right);
    }
}

void main() {
    int inCount = 15;
    int quickArr[] = { 40, 55, 11, 32, 67, 5, 74, 89, 38, 66, 27, 36, 79, 99, 2 };
    quickSort(quickArr, 0, inCount - 1);
    for (int i = 0; i < inCount; i++) {
        printf("%d, ", quickArr[i]);
    }
}
