#include <bits/stdc++.h>
using namespace std;

int main() {
    int c, n;
    priority_queue<pair<int, int> > pq;
    vector<int> tempo;
    cin >> c >> n;
    for (int i = 0; i < n; i++) {
        int t, d;
        cin >> t >> d;
        pq.push({t, d});
    }

    for(int i = 0; i < n; i++) {
        int t, d;
        t = pq.top().first;
        d = pq.top().second;
        pq.pop();
        tempo.push_back(t);
    }

    for(int i =0; i < tempo.size(); i++) {
        cout << tempo[i] << " ";
    }
}