CC=gcc
CFLAGS=-O3 -Wall
LIBS=-pthread
SRC=src

all: server.out client.out
server.out: server.o
	$(CC) $(CFLAGS) $(LIBS) -o server.out server.o
client.out: client.o
	$(CC) $(CFLAGS) $(LIBS) -o client.out client.o
server.o: server.c
	$(CC) $(CFLAGS) -c server.c
client.o: client.c
	$(CC) $(CFLAGS) -c client.c

.PHONY: clean
clean:
	rm -f *.o *.out
