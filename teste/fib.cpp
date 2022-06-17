#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> PII;

#define REP(i,n) for (int i=0; i<(n); ++i)
#define FOR(var,pocz,koniec) for (int var=(pocz); var<=(koniec); ++var)
#define FORD(var,pocz,koniec) for (int var=(pocz); var>=(koniec); --var)
#define PB push_back
#define MP(a,b) make_pair(a,b)
#define F first
#define S second

#define MAX 100000000

int fibonacci(int n) {
    if (n <= 1) {
        return 1;
    } 
    return fibonacci(n - 1) + fibonacci(n - 2);
}

// dynamic programming
int fibonacci_dp(int n) {
    int dp[n + 1];
    dp[0] = 1;
    dp[1] = 1;
    for (int i = 2; i <= n; i++) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    return dp[n];
}

int main() {

    int n;
    cin >> n;
    int res = fibonacci(n);
    cout << res << endl;

    return 0;
}


//g++ exe.cpp -o exe && exe < input.txt
