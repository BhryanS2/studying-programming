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


int minOperations(vector<int>& nums, int k) {
  int soma = 0;
  int n = nums.size();
  int i = 0;
  for (int i = 0; i < n; i++)
  {  
    soma += nums[i];
  }
  int resto = soma % k;
  if (resto == 0) return 0;
  return resto;
}

int main() {
  vector<int> v;
  int k;
  cin >> k;
  int n;
  while (cin >> n && n != EOF)
  {
    v.PB(n);
  }

  cout << minOperations(v, k) << endl;

  return 0;
}


//g++ exe.cpp -o exe; cat input.txt | ./exe
