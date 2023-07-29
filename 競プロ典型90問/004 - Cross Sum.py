# 入力
H, W = map(int, input().split())
A = [list(map(int, input().split())) for _ in range(H)]

# 前処理
yoko = list(map(sum, A))
tate = list(map(sum, zip(*A)))

# 各マス
for i in range(H):
    print(' '.join(map(lambda j: str(yoko[i] + tate[j] - A[i][j]), range(W)))