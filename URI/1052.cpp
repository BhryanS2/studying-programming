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
  switch (n)
  {
   case 1:
    printf("January\n");
    break;
   case 2:
    printf("February\n");
    break;
   case 3:
    printf("March\n");
    break;
   case 4:
    printf("April\n");
    break;
   case 5:
    printf("May\n");
    break;
   case 6:
    printf("June\n");
    break;
   case 7:
    printf("July\n");
    break;
   case 8:
    printf("August\n");
    break;
   case 9:
    printf("September\n");
    break;
   case 10:
    printf("October\n");
    break;
   case 11:
    printf("November\n");
    break;
   case 12:
    printf("December\n");
    break;
  default:
    break;
  }

  return 0;
}


//g++ exe.cpp -o exe; cat input.txt | ./exe
