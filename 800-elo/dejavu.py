loop_counter = int(input())

def not_palindrome(s):
    left = 0
    right = len(s) - 1
    
    while left <right:
        if s[left] != s[right]:
            return True
        else:
            left +=1
            right -=1
    return False

for _ in range(loop_counter):
    string = list(input())
    temp = string[:]
    temp.insert(0,"a")
    if not_palindrome(temp):
        prt = ""
        for s in temp:
            prt = prt + s
        print("YES")
        print(prt)
        continue
   
    temp = string[:]
    temp.insert(len(temp),"a")
    if not_palindrome(temp):
        prt = ""
        for s in temp:
            prt = prt + s
        print("YES")
        print(prt)
        continue
    
    else:
        print("NO")
    