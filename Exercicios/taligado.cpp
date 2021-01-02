#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int n, m;

int main() {
  int t, a, b;
  
  cin >> n >> m;
  vector<int> v[100001];

  while(m--) {
    cin >> t >> a >> b;
    
    if (t) {
      v[a].push_back(b);
      v[b].push_back(a);
    } else {
      cout << (find(v[a].begin(), v[a].end(), b) != v[a].end()) << endl;
    }
  }
}