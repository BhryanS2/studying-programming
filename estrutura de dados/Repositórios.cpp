/*
Repositórios
https://neps.academy/br/course/10/lesson/275
Fonte: OBI 2007 - Primeira Fase
*/
#include <bits/stdc++.h>
using namespace std;

int n, c;
map<int, int> m;

int main() {
    cin >> n >> c;
    for(int i = 0; i < (n + c); i++){
        int f, s;
        cin >> f >> s;
        m[f] = s;
    }

    pair<int, int> res;

    for(map<int, int>::iterator it = m.begin(); it != m.end(); it++){
        res.first = it->first;
        res.second = it-> second;

        cout << "(" << it->first << ", " << it->second << ")" << endl;
    }

    cout << res.first << " " << res.second << endl;
}
/*
3 2
1640 1
2540 4
1870 3
2540 1
1640 4
*/
