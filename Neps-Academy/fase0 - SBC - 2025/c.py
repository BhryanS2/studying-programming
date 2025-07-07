import numpy as np

def build_cnot(N, c, t):
    size = 1 << N
    mat = np.eye(size, dtype=int)
    for i in range(size):
        if (i >> c) & 1:
            j = i ^ (1 << t)
            mat[i], mat[j] = mat[j].copy(), mat[i].copy()
    return mat

def build_ccnot(N, c1, c2, t):
    size = 1 << N
    mat = np.eye(size, dtype=int)
    for i in range(size):
        if ((i >> c1) & 1) and ((i >> c2) & 1):
            j = i ^ (1 << t)
            mat[i], mat[j] = mat[j].copy(), mat[i].copy()
    return mat

def main():
    import sys
    input = sys.stdin.read
    data = input().split()

    idx = 0
    N = int(data[idx])
    idx += 1
    M = int(data[idx])
    idx += 1

    size = 1 << N
    result = np.eye(size, dtype=int)

    gates = []
    for _ in range(M):
        T = int(data[idx])
        idx += 1
        if T == 1:
            c = int(data[idx])
            idx += 1
            t = int(data[idx])
            idx += 1
            gate = build_cnot(N, c, t)
        else:
            c1 = int(data[idx])
            idx += 1
            c2 = int(data[idx])
            idx += 1
            t = int(data[idx])
            idx += 1
            gate = build_ccnot(N, c1, c2, t)
        result = gate @ result  # Multiplicação em ordem reversa
     
    for row in result:
        print("".join(str(x) for x in row))

if __name__ == "__main__":
    main()
