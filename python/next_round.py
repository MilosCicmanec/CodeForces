tmp = [int(i) for i in input().split()]
n,k = tmp[0],tmp[1]
nums = [int(i) for i in input().split()]
res = 0
for i in range(n):
    if nums[i] >= nums[k-1] and nums[i] > 0:
        res +=1
print(res)
