CFLAGS=-Wall -std=c11 -pedantic -Wextra -Wconversion

all: main.c
	$(CC) $(CFLAGS) main.c -o test

clean:
	rm -rf ./test
