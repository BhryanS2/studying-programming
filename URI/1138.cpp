/*
https://www.beecrowd.com.br/judge/pt/problems/view/1138
Contagem de Dígitos
In progress
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

int countDigits(int n, int d) {
  int result = 0;
  int position = 1;
  int partialSum = 0;
  int previousValue = 0;

  while (n > 0) {
    int currentDigit = n % 10;
    n /= 10;

    result += currentDigit * previousValue * position / 10;

    if (currentDigit > d)
      result += position;
    else if (currentDigit == d)
      result += partialSum + 1;

    partialSum += position * currentDigit;
    position *= 10;
    ++previousValue;
  }

  if (d == 0)
    result -= (position - 1) / 9;

  return result;
}


int main() {
  int start, end;

  while (scanf("%d %d", &start, &end), start) {
    for (int digit = 0; digit < 9; ++digit) {
      printf("%d ", countDigits(end, digit) - countDigits(start - 1, digit));
    }

    printf("%d\n", countDigits(end, 9) - countDigits(start - 1, 9));
  }

  return 0;
}


//g++ exe.cpp -o exe && ./exe < input.txt
