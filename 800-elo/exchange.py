# you can sell one gold coin for "a" silver coins
# you can also buy one gold for "b" silver coins
# "n" is the required amount of silver coins
# if b < a print 1
for i in range(int(input())):
    inputs = [int(i) for i in input().split()]
    n = inputs[0]
    a = inputs[1]   
    b = inputs[2]
    if b < a:
        print(1)
    else:
        counter = (n + a - 1)//a
        print(int(counter))
