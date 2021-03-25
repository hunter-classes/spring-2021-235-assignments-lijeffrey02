main: main.o stack.o
	g++ -o main main.cpp stack.cpp stack.h

main.o: main.cpp stack.o

stack.o: stack.cpp stack.h

clean:
	rm -f *.o