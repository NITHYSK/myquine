CFLAGS=-std=c11 -g -static
TARGET = quine
SOURCES = $(wildcard *.c)

$(TARGET): $(SOURCES)
	     $(CC) -o $@ $^

test: $(TARGET)
	./test.sh

clean:
	rm $(TARGET)
