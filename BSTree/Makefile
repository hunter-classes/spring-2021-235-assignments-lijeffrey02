run:
	make main
	./main

main: main.o Node.o BSTree.o
	g++ -o main main.o Node.o BSTree.o

main.o: main.cpp Node.h

Node.o: Node.cpp Node.h

BSTree.o: BSTree.cpp BSTree.h

clean: 
	rm -f main.o Node.o BSTree.o
