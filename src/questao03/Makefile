PROG = questao03

CC = g++
CPPFLAGS = -Wall -pedantic -ansi -std=c++11 -O0 -g

OBJS = main.o

$(PROG): $(OBJS)
	$(CC) -o $(PROG) $(OBJS)

main.o:
	$(CC) $(CPPFLAGS) -c main.cpp

clean:
	rm -f core $(PROG) $(OBJS)

