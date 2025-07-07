#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  vector<unsigned long long> sequencia(18);

  sequencia[1] = 0;
  sequencia[2] = 1;
  sequencia[3] = 1;
  sequencia[4] = 1;
  sequencia[5] = 2;
  sequencia[6] = 2;
  sequencia[7] = 4;
  sequencia[8] = 8;
  sequencia[9] = 12;

  for (int i = 10; i <= 17; ++i) {
    if (i % 2 == 0) {
      sequencia[i] = sequencia[i - 1] * sequencia[i - 2];
    }
    else {
      sequencia[i] = sequencia[i - 1] + sequencia[i - 2];
    }
  }

  int n;

  while (cin >> n) {
    cout << sequencia[n] << endl;
  }

  return 0;
}


//g++ 2149.cpp -o exe;cat input.txt | ./exe
