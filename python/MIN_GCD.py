
import math 
from functools import reduce

def find_gcd(a):
    return reduce(math.gcd, a)

for _ in range(int(input())):
    thrash = input()
    nums = [int(i) for i in input().split()]
    x = min(nums)
    
    arr = []
    toggle = False
    for i in nums:
        if i == x and toggle == False:
            toggle = True
        elif i == x and toggle == True:
            arr.append(i)
        elif i % x == 0:
            arr.append(i)
    
    if not arr:
        print("no")
    elif x == find_gcd(arr):
        print("yes")
    else:
        print("no")

