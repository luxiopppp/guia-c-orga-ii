CC = gcc
CFLAGS = -Wall -Wextra -pedantic
TARGET = sizeof-natives

all: $(TARGET)

$(TARGET): sizeof-natives.o
	$(CC) $(CFLAGS) $^ -o $@

sizeof-natives.o: sizeof-natives.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm *.o $(TARGET)

.PHONY: all clean
