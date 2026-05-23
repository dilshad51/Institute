# Take principal, rate, time → calculate simple interest
 
p=float(input("Enter principal amount: "))
r=float(input("Enter rate of interest per annum: "))
t=float(input("Enter time period in years: "))

SI=(p*r*t)/100

print("Simple interest: ",SI)