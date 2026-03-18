import random


a = int(input("Enter starting of range: "))
b = int(input("Enter ending of range: "))

isPrime = True
num = random.randint(a,b)
print("-100The selected number {} is:".format(num))
if(num >= 0):
    print("         1. Positive")
else:
    print("         1. Negative")

if(num%2 == 0):
    print("         2. Even")
else:
    print("         2. Odd")

if num >= 0:
    for i in range(2,num):
        if num % i == 0:
            isPrime = False
            break
    if isPrime:
        print("         3. is Prime")
    else:
        print("         3. is not Prime")
else:
    print("         3. Negative numbers are not prime")
