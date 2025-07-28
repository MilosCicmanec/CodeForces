x = int(input())
for i in range(x):
    inp = list(input())
    if len(inp) > 10:
        temp = ""
        temp = temp + inp[0] 
        temp = temp + str(len(inp)-2)
        temp = temp + inp[-1]
        print(temp)
    else:
        print(''.join(inp))

