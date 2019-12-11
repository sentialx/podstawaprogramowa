def horner(wsp, st, x):
	result = wsp[0]

	for i in range(st):
		result = result * x + wsp[i + 1]
		
	return result

# example print
print(horner([1, 2, -1], 2, 2))
