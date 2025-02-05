number = int(input("Enter a number: "))

if 10 <= number <= 20:
    if number % 2 == 0:
        print(f"{number} is even and between 10 and 20.")
    else:
        print(f"{number} is odd and between 10 and 20.")
else:
    print(f"{number} is not between 10 and 20.") 