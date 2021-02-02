/*
Times
https://neps.academy/br/exercise/253
Fonte: OBI 2010 - Primeira Fase
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, t;
  vector< pair<int, string> > v;
  vector <string> time[1005];

  cin >> n >> t;

  for (int i = 0; i < n; i++) {
    pair<int, string> temp;
    cin >> temp.second >> temp.first;
    v.push_back(temp);
  }

  sort(v.begin(), v.end());

  int qual_time = 1;

  for (int i = v.size() - 1; i >= 0; i--) {

    time[qual_time].push_back(v[i].second);
    qual_time++;

    if (qual_time > t) qual_time = 1;

  }

  for (int i = 1; i <= t; i++) {
    cout << "Time " << i << endl;

    sort(time[i].begin(), time[i].end());

    for (int j = 0; j < time[i].size(); j++) cout << time[i][j] << endl;
    cout << endl;
  }

}
