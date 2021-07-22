from queue import PriorityQueue

def dijk(s,A,n):
  d = [float("inf")]*n
  d[s] = 0
  fila = PriorityQueue()
  fila.put((d[s],s))
  processado = [False]*n
  processados = 0
  while not fila.empty() and processados < n:
    (valor, u) = fila.get()
    if not processado[u]:
      processado[u] = True
      processados += 1
      for v in range(n):
        if A[u][v]!=float("inf") and d[v]>d[u]+A[u][v]:
          d[v] = d[u]+A[u][v]
          fila.put((d[v],v))
  return d

n = input().split()
while(n):
  while True:
    try:
      (n,m) = input().split()
    except EOFError:
      break
    n = int(n)
    m = int(m)
    A = [[float("inf")]*n for i in [False]*n]
    B = [[float("inf")]*n for i in [False]*n]
    for i in range(m):
      x = input().split()
      print(x)
      u = int(u)-1
      v = int(v)-1
      meio = int(meio)
      custo = int(x)
      if meio == 0:
        A[u][v] = custo
      else:
        B[u][v] = custo
    d = dijk(0,A,n)
    f = dijk(0,B,n)
  print(min(d[n-1],f[n-1]))
  n = n - 1
