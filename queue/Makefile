main: main.cpp queue.o
	g++ -o main main.cpp queue.cpp queue.h

main.o: main.cpp queue.o

queue.o: queue.cpp queue.h

clean:
	rm -f *.o