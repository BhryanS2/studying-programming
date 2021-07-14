#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define f first
#define s second

typedef long long ll;

map<char, int> num;

void Fill() {
  num['0'] = 6;
  num['1'] = 2;
  num['2'] = 5;
  num['3'] = 5;
  num['4'] = 4;
  num['5'] = 5;
  num['6'] = 6;
  num['7'] = 3;
  num['8'] = 7;
  num['9'] = 6;
}

int main() {
  ios_base::sync_with_stdio(0);cin.tie(0);
  Fill();
  int n;
  string str;
  cin >> n;

  for(int i = 0; i < n; i++) {
    int cont = 0;
    cin >> str;
    for(int j = 0; j < str.size(); j++) {
      cont += num[str[j]];
    }

    cout << cont << " leds" << nl;
  }
  return 0;
}
//g++ treino.cpp -o treino && treino < input.txt
