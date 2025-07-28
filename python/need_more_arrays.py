for i in range(int(input())):
    thrash = input()
    nums = [int(x) for x in input().split()]
    t= len(nums)
    l = 1
    v = 0
    count = 0
    while l < len(nums):
        if nums[l] - 1 <= nums[v]:
            count +=1
            l +=1
        else:
            v = l
            l +=1
    print(len(nums)-count)
