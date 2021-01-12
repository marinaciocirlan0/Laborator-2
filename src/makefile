CC = g++
CFLAGS = -g -Wall
FLAGS = -g -Wall -o
EXECUTABLE = liblab2.so

build:
	$(CC) main.c cerinta1.c cerinta2.c cerinta3.c cerinta4.c -shared -fPIC $(FLAGS) $(EXECUTABLE)

cerinta1.o: cerinta1.c
cerinta2.o: cerinta2.c
cerinta3.o: cerinta3.c
cerinta4.o: cerinta4.c
main.o: main.c

.PHONY : clean
clean:
	rm -f *.o *.out $(EXECUTABLE)