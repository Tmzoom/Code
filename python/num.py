def remove_occur(lst,num):
    return[x for x in lst if x!=num]
numbers=list(map(int,input("enter the numbers").split()))
num_to_rem=int(input("enter thr number to be remove"))
update_list=remove_occur(numbers,num_to_rem)
print("updated list is",update_list)

