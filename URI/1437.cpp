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
  int n;
  while (cin >> n && n)
  {
    char comandos[n];
    scanf("%s", comandos);
    int direcao = 0;
    for (int i = 0; i < n; i++)
    {
      if(comandos[i] == 'D') direcao += 1;
      else direcao -= 1;
    }

    int d_mod = direcao % 4;
    if (d_mod == 0) cout << "N" << endl;
    else if (d_mod == 1 || d_mod == -3) cout << "L" << endl;
    else if (d_mod == -2 || d_mod == 2) cout << "S" << endl;
    else if (d_mod == 3 || d_mod == -1) cout << "O" << endl;
    // cout << d_mod << endl;

  }

  return 0;
}


//g++ 1437.cpp -o exe; cat input.txt | ./exe
