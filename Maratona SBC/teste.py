from sys import stdin
import itertools
import queue


def join(e, a, b):
  a, b = find(e, a), find(e, b)
  if a == b:
    return
  if e[a] > e[b]:
    a, b = b, a
  e[a] += e[b]
  e[b] = a


def find(e, x):
  if e[x] < 0:
    return x
  e[x] = find(e, e[x])
  return e[x]


def size(e, x):
  return -e[find(e, x)]


n, k = list(map(int, stdin.readline().split()))
g = list(map(lambda x: int(x) - 1, stdin.readline().split()))
cnt = [0] * n
for x in g:
  cnt[x] += 1

f1 = [-1] * n
for i in range(n):
  join(f1, i, g[i])

q = queue.Queue()
for x in range(n):
  if cnt[x] == 0:
    q.put(x)

while q.qsize() > 0:
  u = g[q.get()]
  cnt[u] -= 1
  if cnt[u] == 0:
    q.put(u)

f2 = [-1] * n
for i in range(n):
  if cnt[i] == 1:
    join(f2, i, g[i])

poss = [False] * (k + 1)
poss[0] = True


def compar(x): return find(f1, x)


for key, comp in itertools.groupby(sorted(range(n), key=compar), compar):
  cm = list(comp)
  down = size(f2, [x for x in cm if cnt[x] == 1][0])
  print(down)
  up = len(cm)

  for j in range(k - down, -1, -1):
    if poss[j]:
      for i in range(down, up + 1):
        if i + j <= k:
          poss[j + i] = True

print([x for x in range(k + 1) if poss[x]][-1])
