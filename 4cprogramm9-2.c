n=int(input())
sum=0
num=n
while n>0:
	r=n%10
	sum=sum+(r**5)
	n=n//10
#	b=sum
if sum==num:
	print("yes it is an armstrong number")
else:
	print("no it is not an armstrong number")
