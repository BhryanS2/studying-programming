#include <iostream>
using namespace std;
int Fibonacci(int N) {
    if (N <= 1) return N;

    return (Fibonacci(N - 1) + Fibonacci(N - 2));
}

int main() {
    int N;
    cin >> N;
    cout << Fibonacci(N + 1) << endl;
    return 1;
}
