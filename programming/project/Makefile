prog: main.o mylib.o
	gcc -o prog main.o mylib.o

main.o: main.c mylib.h
	gcc -c main.c 

mylib.o: mylib.c mylib.h
	gcc -c mylib.c
