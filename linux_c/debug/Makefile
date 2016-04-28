#all 
#all: debug.o
all: test.out 
#Complier
CC = gcc
#Flag 
FLAG = -Wall --save-temps -g 
test.out: test.o debug.o
	$(CC) $^ -o $@ $(FLAG)

test.o: test.c debug.h
	$(CC) -c $^ $(FLAG)

debug.o: debug.c debug.h
	$(CC) -c $^ $(FLAG)

clean:
	rm -f *.h.gch *.i *.s *.o *.out
