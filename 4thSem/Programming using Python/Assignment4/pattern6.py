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