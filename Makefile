CC = g++
DEBUG = -g
CFLAGS = -Wall -c $(DEBUG) --pedantic
LFLAGS = -Wall $(DEBUG) --pedantic
TARGET = 23tree

OBJS1 = Tree23.cpp Tree23.hh

tree23.o : $(OBJS1)
	$(CC) $(CFLAGS) Tree23.cpp
	
		
clean:
	rm -f *.o $(TARGET)
