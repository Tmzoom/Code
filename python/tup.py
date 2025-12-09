number=tuple(map(int,input("enter numbers").split()))
even_num=[]
odd_num=[]
for num in number:
    if num%2==0:
        even_num.append(num)
    else:
        odd_num.append(num)
even_tup=tuple(even_num)
odd_num=tuple(odd_num)
print("even numbers are",even_tup)
print("odd numbers are",odd_num)
