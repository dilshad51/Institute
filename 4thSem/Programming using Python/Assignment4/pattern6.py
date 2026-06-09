#      1 
#     1 1 
#    1 2 1 
#   1 3 3 1 
#  1 4 6 4 1 
# 1 5 10 10 5 1

l=int(input("Enter n:"))
def ncr(n,r):
    return fact(n)//(fact(n-r)*fact(r))
def fact(n):
    if(n==0 or n==1):
        return 1
    else :
        return n*fact(n-1)
for n in range(0,l+1):
    for j in range(l-n):
        print(" ",end="")
    for r in range(0,n+1):
        print(ncr(n,r),end=" ")
    print()