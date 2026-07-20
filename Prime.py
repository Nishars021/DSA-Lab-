a = int(input("Enter a number : "))

if a > 1:
    for i in range(2,a):
        if a % i == 0 :
            print("Not a prime number")
            break
    else:
            print("Prime Number")
else:
        print("Not a prime number")
