#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    long long K;
    cin >> N >> K;
    vector<long long> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    vector<int> B(N);

    for (int start = 0; start < N; ++start) {
        long long phase = A[start];
        int pos = start;
        while (true) {
            // Next position in the circle
            int next = (pos + 1) % N;
            // Try to pass through next filter
            if (phase + K > A[next]) {
                // Particle stops at next filter (1-based)
                B[start] = next + 1;
                break;
            } else {
                phase += K;
                pos = next;
                if (pos == start) {
                    // Completed a full circle, next filter is start
                    // If it can go through its own again, infinite loop, but by the problem, K >= 1, so it will eventually stop
                    // But since Ai can be negative or positive, and K positive, so it's safe
                    continue;
                }
            }
        }
    }

    for (int i = 0; i < N; ++i) {
        cout << B[i];
        if (i != N - 1) cout << " ";
    }
    cout << "\n";
    return 0;
}