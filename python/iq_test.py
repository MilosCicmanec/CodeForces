x = int(input())

nums = [int(i) for i in input().split()]
odd = 0
even = 0
for i in range(3):
    if nums[i] % 2 == 0:
        even +=1
    else:
        odd +=1
if odd > even:
    for i in range(len(nums)):
        if nums[i] % 2 == 0:
            print(i+1)
            break
else:   
    for i in range(len(nums)):
        if nums[i] % 2 == 1:
            print(i+1)
            break
