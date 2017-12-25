a.out : tree.o client.o
	gcc tree.o client.o
tree.o : tree.c tree.h
	gcc -c -g tree.c
client.o : client.c tree.h
	gcc -c -g client.c

