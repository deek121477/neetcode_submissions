def check_range(num: int) -> str:
    if num < 0:
       print("negative")
    elif num==0:
         print("zero")
    elif num<10:
         print("positive single digit")
    else:
        print("positive multi digit")

  
# don't modify code below this line
print(check_range(-10))
print(check_range(0))
print(check_range(9))
print(check_range(1000))
