"""

"""
class MyIterator:
        def __init__(self, c):
                self.c = c
                self.i = 0
        def __next__(self):
                if self.i < len(self.c.mylist):
                        self.i += 1
                        return self.c.mylist[self.i - 1]        
                else:
                        raise StopIteration
        def __hasNext__(self):
                return self.i<len(self.c.mylist)

class MyCollection:
        def __init__(self, n):
                self.mylist = list(range(n))
        
        def __iter__(self):
                return MyIterator(self)
        
        
c1 = MyCollection(20)
"""
for e in c1:
        print(e)
"""
 
it1 = iter(c1)   
it2 = iter(c1)   

print(next(it1)) # it1.__next__() # 0
print(next(it2)) # it1.__next__() # 0 # we expect 0; we get it!
print(it2.__hasNext__())
print(hasNext(it1))

















        


