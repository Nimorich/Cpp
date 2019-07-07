# def mnozhitel(*args):
# 	return sum(args)
# def vizivalka(func, *args):
# 	return func(*args)

# print(vizivalka(mnozhitel, 12, 5, 2, 4, 15))

def outer(a,b):
	def inner(c,d):
		return(c+d)
	return inner(a,b)

print(outer(5,5))