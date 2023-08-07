# MOD
MOD = 1000000007

# N の対数
LOG = 62
# 入力
N, B, K = map(int, input().split())
C = list(map(int, input().split()))

# dp[i] と dp[j] を掛け合わせて dp[i+j] を得る関数
# tj: 10^j を B で割ったあまり
def mul(dpi, dpj, tj):
    res = [0] * B
    for p in range(B):
        for q in range(B):
            res[(p * tj + q) % B] += dpi[p] * dpj[q]
            res[(p * tj + q) % B] %= MOD
    return res