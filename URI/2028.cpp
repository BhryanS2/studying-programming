#include <bits/stdc++.h>
using namespace std;
int main()
{
  int casos = 0;
  int n;
  while (cin >> n && n != EOF)
  {
    casos++;
    vector<int> v;
    for (int i = 0; i <= n; i++)
    {
      if (i == 0) v.push_back(0);
      for (int j = 0; j <= i - 1; ++j)
      {
        v.push_back(i);
      }
    }
    string s = v.size() == 1? "numero" : "numeros";
    cout << "Caso " << casos << ": " << v.size() << " " << s << endl;
    if (v.size() == 1) {
      cout << v[0] << endl << endl;
      continue;
    }
    for(auto i : v) {
      cout << i << " ";
    }
    cout << endl << endl;
  }

  return 0;
}
