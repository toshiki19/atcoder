N, L = map(int, input().split())
K = int(input())
A = list(map(int, input().split()))

# 判定問題 (すべての長さを x 以上にすることは可能か？)
def check(x):
    num = 0  # 何個切れたか
    pre = 0  # 前回の切れ目
    for i in range(N):
        # x を超えたら切断
        if A[i] - pre >= x:
            print(i)
            num += 1
            pre = A[i]

    # 最後のピースが x 以上なら加算
    if L - pre >= x:
        num += 1

    return (num >= K + 1)

# 二分探索
left, right = -1, L + 1
while right - left > 1:
    mid = (left + right) // 2
    if check(mid):
        left = mid
    else:
        right = mid
print(left)