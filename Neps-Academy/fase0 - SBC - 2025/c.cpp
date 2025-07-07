#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

using Matrix = vector<vector<int>>;


Matrix identity(int N) {
    int size = 1 << N;
    Matrix mat(size, vector<int>(size, 0));
    for (int i = 0; i < size; ++i)
        mat[i][i] = 1;
    return mat;
}


Matrix multiply(const Matrix& A, const Matrix& B) {
    int size = A.size();
    Matrix result(size, vector<int>(size, 0));
    for (int i = 0; i < size; ++i)
        for (int k = 0; k < size; ++k)
            if (A[i][k])
                for (int j = 0; j < size; ++j)
                    result[i][j] |= B[k][j];
    return result;
}


Matrix cnot(int N, int c, int t) {
    int size = 1 << N;
    Matrix mat = identity(N);
    for (int i = 0; i < size; ++i) {
        if ((i >> c) & 1) {
            int j = i ^ (1 << t);
            mat[i][i] = 0;
            mat[j][j] = 0;
            mat[i][j] = 1;
            mat[j][i] = 1;
        }
    }
    return mat;
}


Matrix ccnot(int N, int c1, int c2, int t) {
    int size = 1 << N;
    Matrix mat = identity(N);
    for (int i = 0; i < size; ++i) {
        if (((i >> c1) & 1) && ((i >> c2) & 1)) {
            int j = i ^ (1 << t);
            mat[i][i] = 0;
            mat[j][j] = 0;
            mat[i][j] = 1;
            mat[j][i] = 1;
        }
    }
    return mat;
}

int main() {
    int N, M;
    cin >> N >> M;

    vector<Matrix> gates;
    for (int i = 0; i < M; ++i) {
        int T;
        cin >> T;
        if (T == 1) {
            int c, t;
            cin >> c >> t;
            gates.push_back(cnot(N, c, t));
        } else {
            int c1, c2, t;
            cin >> c1 >> c2 >> t;
            gates.push_back(ccnot(N, c1, c2, t));
        }
    }

    Matrix result = identity(N);
    
    for (int i = M - 1; i >= 0; --i)
        result = multiply(gates[i], result);

    
    int size = 1 << N;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j)
            cout << result[i][j];
        cout << '\n';
    }

    return 0;
}
