# Number is divisible by 3 and 5.

n=int(input("Enter any number: "))

if n%3==0 and n%5==0:
    print(n," is divisible by 3 and 5 both.")
else:
    print("Not divisible by both")