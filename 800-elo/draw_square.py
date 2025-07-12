x = int(input())
for i in range(x):
    inputs = [int(i) for i in input().split()]
    if inputs[0] + inputs[1] == inputs[2] + inputs[3]:
        print("YES")
    else:
        print("NO")

