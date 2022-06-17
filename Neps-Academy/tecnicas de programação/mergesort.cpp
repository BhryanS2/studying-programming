#include <bits/stdc++.h>
using namespace std;

vector<int> vecMerge;
// neste código, irei definir INF como 1 bilhão
#define INF 1000000000


// função merge_sort que ordena um vector v
void merge_sort(vector<int> &v){
	
	// se o tamanho de v for 1, retorno a função
	if(v.size()==1) return;
	
	// se não
	
	// declaro os vetore u1 e u2
	vector<int> u1, u2;
	
	// e faço cada um receber uma metade de v
	for(int i=0;i<v.size()/2;i++) u1.push_back(v[i]);
	for(int i=v.size()/2;i<v.size();i++) u2.push_back(v[i]);
	
	// ordeno u1 e u2
	merge_sort(u1);
	merge_sort(u2);
	
	// e adiciono INF ao final de cada um deles
	u1.push_back(INF);
	u2.push_back(INF);
	
	// declaro ini1 e ini2 com valore inicial zero
	int ini1=0, ini2=0;
	
	// percorro cada posição de v
	for(int i=0;i<v.size();i++){
		
		// se o menor não usado de u1 for menor o mesmo em u2
		if(u1[ini1]<u2[ini2]){
			
			// então o coloco em v
			v[i]=u1[ini1];
			
			// e incremento o valor de ini1
			ini1++;
		}
		
		// caso contrário, faço o análogo com u2 e ini2
		else{
			
			v[i]=u2[ini2];
			ini2++;
		}
	}
	
	// por fim, retorno a função merge_sort
	return;
}



void bubbleSort(int arr[], int n, int *pointer[]) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                swap(pointer[j], pointer[j+1]);
            }
        }
    }
}

void selectionSort(int arr[], int n, int *pointer[]) {
    for (int i = 0; i < n-1; i++) {
        int min = i;
        for (int j = i+1; j < n; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        swap(arr[i], arr[min]);
        swap(pointer[i], pointer[min]);
    }
}

void heapify(int arr[], int n, int *pointer[], int i) {
    int largest = i;
    int l = 2*i + 1;
    int r = 2*i + 2;
    if (l < n && arr[l] > arr[largest]) {
        largest = l;
    }
    if (r < n && arr[r] > arr[largest]) {
        largest = r;
    }
    if (largest != i) {
        swap(arr[i], arr[largest]);
        swap(pointer[i], pointer[largest]);
        heapify(arr, n, pointer, largest);
    }
}

void heapSort(int arr[], int n, int *pointer[]) {
    for (int i = n/2-1; i >= 0; i--) {
        heapify(arr, n, pointer, i);
    }
    for (int i = n-1; i >= 0; i--) {
        swap(arr[0], arr[i]);
        swap(pointer[0], pointer[i]);
        heapify(arr, i, pointer, 0);
    }
}

int main() {
    int n;
    cin >> n;
    int v[n];
    vecMerge.resize(n);

    for (int i = 0; i < n; i++) {
        cin >> vecMerge[i];
    }
    // int *pointer[n];
    // bubbleSort(v, n, pointer);
    // selectionSort(v, n, pointer);
    // mergeSort(v, 0, n-1, pointer);
    // heapSort(v, n, pointer);


    // for (int i = 0; i < n; i++) {
    //     cout << v[i] << " ";
    // }
    merge_sort(vecMerge);
    for (int i = n - 1; i >= 0; i--) {
        cout << vecMerge[i] << " ";
    }
    return 0;
}