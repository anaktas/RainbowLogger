all: build

build:
	gcc -std=c99 log.h log.c example.c -o example

clean:
	-rm example
	clear