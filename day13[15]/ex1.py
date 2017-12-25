
class Ex:
	def __init__(self):
		pass
	def foo(self, x):
		print('foo : ', x)
	@staticmethod
	def bar() :
		print('bar')

ex = Ex()
ex.foo(10) # Ex.foo(ex, 10)
Ex.foo(ex, 20)
p = Ex.foo 
p(ex, 30)

Ex.bar()
ex.bar()

class MyCollection:
	def __init__(self, n):
		self.mylist = list(range(n))
	
	def __iter__(self):
		self.i = 0
		return self

	def __next__(self):
		if self.i < len(self.mylist):
			self.i += 1
			return self.mylist[self.i - 1]	
		else:
			raise StopIteration

c1 = MyCollection(20)

#for e in c1:
	#print(e)

# iterators are tied strongly - coupled strongly - with the collection
# the state of the iterator is actually stored in the collection itself
it1 = iter(c1)  # c1.__iter__()
it2 = iter(c1)  # c1.__iter__()

print(next(it1)) # it1.__next__() # 0

print(next(it2)) # it1.__next__() # 1 # we expect 0



















	


