CC = gcc
CFLAGS = -Iinclude -Wall

all: test

libstrutils.a: src/strutils.o
	ar rcs libstrutils.a src/strutils.o

src/strutils.o: src/strutils.c include/strutils.h
	$(CC) $(CFLAGS) -c src/strutils.c -o src/strutils.o

test: libstrutils.a test/test_strutils.c
	$(CC) $(CFLAGS) test/test_strutils.c libstrutils.a -o test/test_strutils

clean:
	rm -f src/*.o test/test_strutils libstrutils.a
