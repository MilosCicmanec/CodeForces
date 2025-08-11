t = int(input())
for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    has_zero = False
    distinct_nonzero = set()
    for num in a:
        if num == -1:
            continue
        if num == 0:
            has_zero = True
        else:
            distinct_nonzero.add(num)
    if has_zero:
        print("NO")
    else:
        if len(distinct_nonzero) <= 1:
            print("YES")
        else:
            print("NO")