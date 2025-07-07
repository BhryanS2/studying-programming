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
  cin >> n;
  cin.ignore();
  for (int i = 0; i < n; i++)
  {
    string s, c="";
    getline(cin, s);
    bool pegar = false;

    if (!((s[0]>='a' && s[0] <= 'z'))) pegar = true;
    else {
      c = s[0];
    }

    for (int j = 0; j < s.size(); j++)
    {
      bool esta_no_intervalo = (s[j]>='a' && s[j] <= 'z');
      if(!esta_no_intervalo) pegar=true;
      if(pegar && esta_no_intervalo) {
        c+=s[j];
        pegar=false;
      }
    }
    cout << c << endl;
  }

  return 0;
}


//g++ 1272.cpp -o exe; cat input.txt | ./exe
