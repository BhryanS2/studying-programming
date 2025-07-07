/*

*/
#include <bits/stdc++.h>
using namespace std;


#define MAX 100000000

int main() {
  int e, s, l;
  cin >> e >> s >> l;
  int dist_es = abs(e - s);
  int dist_el = abs(e - l);
  int dist_sl = abs(s - l);

  int soma = dist_el + dist_es + dist_sl;
  cout << soma << endl;

  return 0;
}


//g++ festa.cpp -o exe; cat input.txt | ./exe
