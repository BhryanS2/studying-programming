#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> PII;
typedef long long int LLI;
typedef unsigned long long int ULLI;

#define REP(i,n) for (int i=0; i<(n); ++i)
#define FOR(var,pocz,koniec) for (int var=(pocz); var<=(koniec); ++var)
#define FORD(var,pocz,koniec) for (int var=(pocz); var>=(koniec); --var)
#define PB push_back
#define MP(a,b) make_pair(a,b)
#define F first
#define S second

#define MAX 100000000

int main() {
  char s[1002];
  while (scanf("%s", s) != EOF) {
    // digito mais frequente
    int freq[10] = { 0 };
    for (int i = 0; s[i] != '\0'; i++) {
      int pos = s[i] - '0';
      freq[pos]++;
    }
    int num_more_frequent = -1;
    int max_freq = -1;
    int max_number = -1;
    for (int i = 0; i < 10; i++) {
      if (freq[i] >= max_freq && i > max_number) {
        max_number = i;
        max_freq = freq[i];
        num_more_frequent = i;
      }
    }
    cout << num_more_frequent << endl;
  }

  return 0;
}


//g++ 2138.cpp -o exe;cat input.txt | ./exe
