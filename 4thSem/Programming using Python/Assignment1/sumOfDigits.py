# Take a 3-digit number → find sum of digits

n=int(input("Enter a 3 digit number: "))
sum=0
while n>0:
    r=n%10
    sum+=r
    n//=10
print("Sum of digits: ",sum)