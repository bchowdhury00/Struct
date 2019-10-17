all: struct.o
	gcc -o runfile struct.o

struct.o: struct.c
	gcc -c struct.c

run:
	./runfile

clean:
	rm *.o
	rm *~
