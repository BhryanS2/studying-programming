#include <bits/stdc++.h>
using namespace std;
/*
beecrowd | 2006
Identificando o Chá
https://www.beecrowd.com.br/judge/pt/problems/view/2006
*/
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define f first
#define s second

typedef long long ll;

int main() {_
  int n;
  int count;
  cin >> n;
  for (int i = 0; i < 5; i++) {
    int cha;
    cin >> cha;
    if (n == cha) {
      count++;
    }
  }

  cout << count << endl;
  

  return 0;
}
//g++ 2006.cpp -o 2006.exe && 2006.exe < input.txt
