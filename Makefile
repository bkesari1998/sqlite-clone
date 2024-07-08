CC = gcc
CFLAGS = -Wall -Wextra 
OBJS = main.o input_buffer.o io.o
EXECS = sqlite_clone
INC = ./include

default: sqlite_clone

sqlite_clone: $(OBJS) $(INC)
	$(CC) $(CFLAGS) $(OBJS) -o sqlite_clone

main.o: main.c $(INC)
	$(CC) $(CFLAGS) -I $(INC) -c main.c -o main.o 

input_buffer.o: input_buffer.c $(INC)
	$(CC) $(CFLAGS) -I $(INC) -c input_buffer.c -o input_buffer.o 

io.o: io.c $(INC)
	$(CC) $(CFLAGS) -I $(INC) -c io.c -o io.o

clean:
	rm $(OBJS) $(EXECS) 
