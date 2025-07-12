import math
for i in range(int(input())):
    x = int(input())
    if x % 4 == 0:
        y = x // 4
        if math.isqrt(y) **2 == y :
            print("yes")
            continue
    if x % 2 == 0:
        y = x // 2
        if math.isqrt(y) **2 == y:
            print("yes")
            continue
    print("no")
        
