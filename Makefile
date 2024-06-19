# Makefile
.PHONY: all clean compile compile_debug

CC = gcc
CFLAGS = -Wall -Wextra -Werror -std=c11
DEBUG_CFLAGS = -Wall -Wextra -Werror -std=c11 -DDEBUG

SRC = $(wildcard *.c)
EXEC = my_program


compile: 
	$(CC) $(CFLAGS) $(SRC) -o $(EXEC)

compile_debug:
	$(CC) $(DEBUG_CFLAGS) $(SRC) -o $(EXEC)_debug

clean:
	rm -f $(OBJ) $(EXEC) $(EXEC)_debug
