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

int countUniqueXORTriplets(vector<int>& arr) {
  arr.insert(arr.begin(), 0);  // Insere 0 no início do vetor
  int n = arr.size();
  
  // Realiza a operação XOR entre os elementos consecutivos
  for (int i = 0; i < n - 1; ++i) {
      arr[i + 1] ^= arr[i];
  }
  
  int res = 0;
  
  // Calcula o número de tripletos
  for (int i = 0; i < n; ++i) {
      for (int j = i + 1; j < n; ++j) {
          if (arr[i] == arr[j]) {
              res += j - i;
          }
      }
  }
  
  return res;
}

int main() {
  vector<int> nums = { 1,2 }; // -> 2
  vector<int> nums2 = { 3,1,2 }; // -> 4
  cout << countUniqueXORTriplets(nums) << endl << endl;
  cout << countUniqueXORTriplets(nums2) << endl;

  return 0;
}
//g++ 100628.cpp -o exe; cat input.txt | ./exe
