all: main.c bintree.o
	cc -Wall -I ./include ./obj/bintree.o main.c -o test


bintree.o: ./src/bintree.c
	cc -Wall -c -I ./include/ ./src/bintree.c -o ./obj/bintree.o

clean:
	rm -rf ./obj/*
	rm -rf ./test/test/*