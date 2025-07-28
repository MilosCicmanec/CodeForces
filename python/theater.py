import math

inputs = [int(i) for i in input().split()]
res = 1
for i in range(2):
    temp = inputs[i] / inputs[2]
    if temp == int(temp):
        res = res * int(temp)
    else:
        res = res * math.ceil(temp)
print(res)
