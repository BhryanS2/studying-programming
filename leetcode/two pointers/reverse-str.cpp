// https://leetcode.com/problems/reverse-words-in-a-string-iii/

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

string solutionOne(string s) {
  istringstream iss(s);
  string word;
  string final_str = "";
  while (iss >> word) {
    reverse(word.begin(), word.end());
    final_str += word + " ";
  }
  final_str.pop_back();
  return final_str;
}

string solutionTwo(string s) {
  for(int l, r; (l = s.find_first_not_of(' ')) != string::npos; s.erase(0, l)) {
    r = s.find_first_of(' ', l);
    if (r == string::npos) r = s.size();
    reverse(s.begin() + l, s.begin() + r);
    cout << s.substr(l, r - l) << " ";
    s.erase(0, r);
  }
  cout << endl;
  return s;
}

string solutionThree(string s) {
  int l = 0, r = 0;
  string final_str = "";
  while (r < s.size()) {
    if (s[r] == ' ') {
      for (int i = l; i < r; i++) {
        int fim_ate_espaco = r - 1;
        int pos = fim_ate_espaco - (i - l);
        final_str += s[pos];
      }
      final_str += ' ';

      l = r + 1;
    } 
    // a última palavra não tem espaço
    else if (r == s.size() - 1) {
      for (int i = l; i <= r; i++) {
        int fim_ate_espaco = r;
        int pos = fim_ate_espaco - (i - l);
        final_str += s[pos];
      }
    }

    r++;
  }

  return final_str;
}

int main() {
  string s;
  getline(cin, s);
  cout << solutionOne(s) << endl;
  cout << solutionTwo(s) << endl;
  cout << solutionThree(s) << endl;
  return 0;
}


//g++ exe.cpp -o exe;cat input.txt | ./exe
