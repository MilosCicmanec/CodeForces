x = int(input())
counter = 0

for i in range(x):
    nums = [int(i) for i in input().split()]
    if sum(nums) > 1 :
        counter +=1
print(counter)
