x = int(input()) 

children = [int(i) for i in input().split()]
inputs = [(value,index+1) for index,value in enumerate(children)]
coding = []
pe = []
math = []

for value,index in inputs:
    if value == 1 :
        coding.append((value,index))
    elif value == 2 :
        math.append((value,index))
    else:
        pe.append((value,index))
x = min(len(coding),len(pe),len(math))
print(x)
for i in range(x):
    c = coding.pop(0)
    c = c[1]
    p = pe.pop(0)
    p = p[1]
    m = math.pop(0)
    m = m[1]
    print(str(c) + " " + str(m) + " " + str(p))

