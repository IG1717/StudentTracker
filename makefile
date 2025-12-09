CC = gcc
CFLAGS = -Wall -Wextra -std=c11
OBJ = main.o student.o

manager: $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o manager

%.o: %.c
	$(CC) $(CFLAGS) -c $<

clean:
	rm -f $(OBJ) manager