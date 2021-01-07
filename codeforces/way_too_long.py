t = int(input())

for i in range(t):
	str = input()
	if(len(str) <= 10):
		print(str)
	else:
		print(f"{str[0]}{len(str) - 2}{str[-1]}")