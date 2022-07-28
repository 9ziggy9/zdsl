INCLUDES=-I ./include
CFLAGS=-Wall -std=c11 -pedantic -Wextra -Wconversion
OBJS=./build/darray.o

all: darray main

main: main.c $(OBJS)
	$(CC) $(INCLUDES) $(CFLAGS) main.c $(OBJS) -o test

darray: src/darray.c
	$(CC) $(INCLUDES) $(CFLAGS) ./src/darray.c -c -o ./build/darray.o

clean:
	rm -rf ./test
