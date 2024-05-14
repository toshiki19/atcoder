N, L = map(int, input().split())
K = int(input())
A = list(map(int, input().split()))

# 判定問題 (すべての長さを x 以上にすることは可能か？)
def check(x):
    num = 0  # 何個切れたか
    pre = 0  # 前回の切れ目
    print("x : " + str(x))
    for i in range(N):
        # x を超えたら切断
        print("A[i] : " + str(A[i]))
        print("A[i] - pre : " + str(A[i] - pre))
        if A[i] - pre >= x:
            num += 1
            pre = A[i]
            print("pre : " + str(pre))
    
    print("num_1 : " + str(num))

    # 最後のピースが x 以上なら加算
    if L - pre >= x:
        num += 1

    print("num_2 : " + str(num))

    return (num >= K + 1)

# 二分探索
left = -1
right = L + 1

while right - left > 1:
    print("left : " + str(left))
    print("right : " + str(right))
    mid = (left + right) // 2
    if check(mid):
        left = mid
    else:
        right = mid
print(left)
