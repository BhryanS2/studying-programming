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
class Solution {
public:
  int maximumLengthSubstring(string s) {
    int l = 0, r = 0;
    int max_length = 0;
    unordered_map<char, int> char_count;
    while(r < s.size()) {
      r++;
      char letra = s[r];
      if(char_count[letra]) char_count[letra]++;
      else char_count[letra] = 1;
      while(char_count[letra] == 3) {
        l++;
        letra = s[l];
        char_count[letra]--;
      }
      max_length = max(max_length, r-l+1);
    }
    return max_length;
  }
};

int main() {
  Solution sol;
  string s = "bcbbbcba";
  cout << sol.maximumLengthSubstring(s) << endl; // Output: 3 (substring "abc")
  
  s = "bbbbb";
  cout << sol.maximumLengthSubstring(s) << endl; // Output: 2 (substring "bb")
  
  s = "pwwkew";
  cout << sol.maximumLengthSubstring(s) << endl; // Output: 3 (substring "wke")

  return 0;
}
//g++ exe.cpp -o exe;cat input.txt | ./exe
