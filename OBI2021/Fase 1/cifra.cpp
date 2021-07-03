#include <bits/stdc++.h>
#define N 24

using namespace std;

const set<char> vowels = { 'a', 'e', 'i', 'o', 'u' };
const char alphabet[N] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'x', 'z' };

char getClosestVowel(int index);
char getNextConsonant(int index);

int main() {
  string p, ans = "";
  cin >> p;

  for (char ch : p) {
    if (vowels.count(ch))
      ans += ch;
    else {
      ans += ch;
      auto it = find(begin(alphabet), end(alphabet), ch);
      int i = distance(begin(alphabet), it);
      ans += getClosestVowel(i);
      if (ch == 'z')
        ans += ch;
      else
        ans += getNextConsonant(i);
    }
  }
  cout << ans << endl;

  return 0;
}

char getClosestVowel(int index) {
  int left, right;
  if (index >= 21)
    right = -1;
  for (int i = index + 1; i < N; i++) {
    if (vowels.count(alphabet[i])) {
      right = i;
      break;
    }
  }
  for (int i = index - 1; i >= 0; i--) {
    if (vowels.count(alphabet[i])) {
      left = i;
      break;
    }
  }
  int ldist = abs(index - left);
  int rdist = abs(index - right);
  int vowelIndex;
  if (ldist <= rdist)
    vowelIndex = left;
  else
    vowelIndex = right;
  return alphabet[vowelIndex];
}

char getNextConsonant(int index) {
  for (int i = index + 1; i < N; i++) {
    if (!vowels.count(alphabet[i]))
      return alphabet[i];
  }
  return 'a';
}
//g++ cifraPass.cpp -o cifraPass.exe && cifraPass.exe < input.txt
