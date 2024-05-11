# N 個のビルが横一列に並んでいて、左から i 番目のビルの高さは H i​  です。
# 左から 1 番目のビルより高いビルが存在するか判定し、存在する場合その内最も左のビルは左から何番目か求めてください。
n = int(input())
h = list(map(int, input().split()))
for i in range(1, n):
  if h[i] > h[0]:
    print(i + 1)
    exit()
print(-1)
