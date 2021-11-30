.PHONY: all build run clean

all: build

run: build
	./shadz

build:
	gcc -o "br.o" -c N1.c
	gcc -o shadz "e c0c.c" br.o

clean:
	rm -f *.o *.out shadz
