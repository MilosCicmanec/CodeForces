for _ in range(int(input())):
    n = int(input())
    if n % 2 == 0:
        print(-1)
    else:
        print(" ".join([str(i) for i in range(n, 0, -1)]))
