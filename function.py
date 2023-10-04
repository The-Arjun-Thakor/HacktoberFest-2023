def percentage(marks):
    percent=((sum(marks)/500)*100)
    return percent


marks=[23,34,55,45,65]
percentage1= percentage(marks)
print(percentage1)


# Recursion
n=5
factorial=1
for i in range(n):
  factorial=factorial*(i+1)
  print(factorial)