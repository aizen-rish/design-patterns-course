"""

"""
class MyIterator1:
	def __init__(self, c):
		self.c = c
		self.i = 0
	def __iter__(self):
		return self
	def __next__(self):
		if self.i < len(self.c.mylist):
			self.i += 1
			return self.c.mylist[self.i - 1]	
		else:
			raise StopIteration

class MyIterator2:
	def __init__(self, c):
		self.c = c
		self.i = 0
	def __iter__(self):
		return self
	def __next__(self):
		if self.i < len(self.c.mylist):
			self.i += 2
			return self.c.mylist[self.i - 2]	
		else:
			raise StopIteration

class MyCollection:
	def __init__(self, n):
		self.mylist = list(range(n))
	
#	def __iter__(self):
#		return MyIterator(self)

	
c1 = MyCollection(19)

for e in MyIterator1(c1):
	print(e, end = " ")
print()

for e in MyIterator2(c1):
	print(e, end = " ")
print()


it1 = MyIterator1(c1)   
it2 = MyIterator1(c1)   

print(next(it1)) # it1.__next__() # 0
print(next(it2)) # it1.__next__() # 0 # we expect 0; we get it!


















	


