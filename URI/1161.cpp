/*
beecrowd | 1161
Soma de Fatoriais
https://www.beecrowd.com.br/judge/pt/problems/view/1161
success
*/
#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> PII;
typedef unsigned long long int ulli;
typedef long long int ll;


#define REP(i,n) for (int i=0; i<(n); ++i)
#define FOR(var,pocz,koniec) for (int var=(pocz); var<=(koniec); ++var)
#define FORD(var,pocz,koniec) for (int var=(pocz); var>=(koniec); --var)
#define PB push_back
#define MP(a,b) make_pair(a,b)
#define F first
#define S second

#define MAX 100000000

map<int, string> memory_factorial;


string multiply(string n1, string n2) {
  int n1_size = n1.size();
  int n2_size = n2.size();

  vector<int> result(n1_size + n2_size, 0);

  int n1_index = 0;
  int n2_index = 0;

  for (int i = n1_size - 1; i >= 0; i--) {
    int carry = 0;
    int n1_digit = n1[i] - '0';
    n2_index = 0;

    for (int j = n2_size - 1; j >= 0; j--) {
      int n2_digit = n2[j] - '0';
      int sum = n1_digit * n2_digit + result[n1_index + n2_index] + carry;
      carry = sum / 10;
      result[n1_index + n2_index] = sum % 10;
      n2_index++;
    }

    if (carry > 0) {
      result[n1_index + n2_index] += carry;
    }

    n1_index++;
  }

  int i = result.size() - 1;
  while (i >= 0 && result[i] == 0) {
    i--;
  }

  if (i == -1) {
    return "0";
  }

  string s = "";
  while (i >= 0) {
    s += to_string(result[i--]);
  }

  return s;
}

string factorial(int n) {
  if (n == 0) {
    return "1";
  }

  if (memory_factorial.find(n) != memory_factorial.end()) {
    return memory_factorial[n];
  }

  string result = "1";
  for (int i = 2; i <= n; i++) {
    result = multiply(result, to_string(i));
  }

  memory_factorial[n] = result;
  return result;
}

string sum(string n1, string n2) {
  int n1_size = n1.size();
  int n2_size = n2.size();

  if (n1_size > n2_size) {
    swap(n1, n2);
    swap(n1_size, n2_size);
  }

  string result = "";

  int carry = 0;
  int n1_index = n1_size - 1;
  int n2_index = n2_size - 1;

  while (n1_index >= 0) {
    int sum = (n1[n1_index] - '0') + (n2[n2_index] - '0') + carry;
    result += to_string(sum % 10);
    carry = sum / 10;
    n1_index--;
    n2_index--;
  }

  while (n2_index >= 0) {
    int sum = (n2[n2_index] - '0') + carry;
    result += to_string(sum % 10);
    carry = sum / 10;
    n2_index--;
  }

  if (carry > 0) {
    result += to_string(carry);
  }

  reverse(result.begin(), result.end());

  return result;
}

int main() {

  int a, b;

  while (cin >> a >> b) {
    string result = sum(factorial(a), factorial(b));
    cout << result << endl;
  }

  return 0;
}


//g++ 1161.cpp -o exe && ./exe < input.txt
