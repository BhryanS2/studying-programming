/*
beecrowd | 1936
Fatorial
Timelimit: 1
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

int fatorial(int n) {
  int res = 1;
  while(n > 1) res *= n--;
  return res;
}

int main() {
  // int f[8];

  // for (int i = 1; i <= 8; i++)
  // {
  //   f[i] = fatorial(i);
  // }
  int f[] = {1, 2, 6, 24, 120, 720, 5040, 40320};
  int n;
  int count = 0;
  cin >> n;

  for (int i = 7; i >= 0; i--)
  {
    int res = n / f[i];
    // cout << "Res: " <<res << " ";
    count += res;
    // cout << "count: " << count << " ";
    n %= f[i];
    // cout << "N: " << n << " " << endl;
  }

  // cout << endl;

  cout << count << endl;



  return 0;
}


//g++ 1936.cpp -o exe; cat input.txt | ./exe
