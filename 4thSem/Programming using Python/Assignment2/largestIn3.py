# Find largest among 3 number.

a=float(input("Enter 1st number: "))
b= float(input("Enter 2nd number: "))
c=float(input("Enter 3rd number:"))

if a>b:
    if a>c:
        print(a," is the largest number.")
    else:
        print(c, " is the largest number.")
else :
    if b>c:
        print(b," is the largest number.")
    else:
        print(c, " is the largest number.")