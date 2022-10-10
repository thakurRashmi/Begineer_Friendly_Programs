n=int(input("Enter a number"))
max=0
while(n>0):
	r=n%10
	if(max<r):
		max=r
	n=n//10
print("maximum digit is",max)
