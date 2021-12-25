CC	= gcc
CFLAGS	= 
TARGET	= quine04
OBJS	= $(SRCS:.c=.o)
LDFLAGS	= -lcrypto

SRCS	= $(wildcard *.c)

$(TARGET):	$(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS) $(LDFLAGS)

$(OBJS):	$(TARGET).h

test:	$(TARGET)
	./test.sh

clean:
	rm ./$(TARGET) ./*.o

.PHONY: test clean

