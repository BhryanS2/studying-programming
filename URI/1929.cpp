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

int main() {
  vector<int> arr(4);
  cin >> arr[0] >> arr[1] >> arr[2] >> arr[3];
  std::sort(arr.begin(), arr.end());
  int a = arr[0], b = arr[1], c = arr[2], d = arr[3];
  if ((c >= a + b) && (d >= c + b)) cout << "N" << endl;
  else cout << "S" << endl;


  return 0;
}


//g++ 1929.cpp -o exe; cat input.txt | ./exe
