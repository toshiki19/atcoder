n = int(input())
s = input().split()

tree = {}
ans = 0
for t in s:
    current = tree
    for c in t:
        if c in current:
            ans += current[c][0]
            current[c][0] += 1
        else:
            current[c] = [1, {}]
        current = current[c][1]
print(ans)
