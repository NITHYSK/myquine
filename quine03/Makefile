CFLAGS	= -std=c11 -g -static
SRC	= $(wildcard *.c)
OBJ	= $(SRC:.c=.o)
LDFLAGS	= #-L/usr/local/lib/mylib
LIBS	= #-l9cc
TARGET	= quiner
CC	= cc

$(TARGET):	$(OBJ)
	$(CC) -c $^
	$(CC) $(OBJ) $(LDFLAGS) $(LIBS) -o $@

$(OBJ):		stdafx.h


clean:
	rm $(TARGET) *.o
