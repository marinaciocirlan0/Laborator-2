CC = gcc
CFLAGS = -g -Wall
FLAGS = -g -Wall -o
EXECUTABLE = program
LIBRARY = liblab2.so
build:
	cd ./src &&\
	make build

test: build
	cd ./src &&\
	make  &&\
	mv $(LIBRARY) ../tests &&\
	cd ../tests &&\
	make &&\
	make execute

clean:
	rm -f ./src/*.o ./tests/*.o