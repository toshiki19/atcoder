# res[i][c] := i 文字目以降で最初に文字 c が登場する index
# 存在しないときは N
def calc_next(S):
    # 文字列 S の長さ
    N = len(S)
    # 答え
    res = [[N] * 26 for _ in range(N + 1)]