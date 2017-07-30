#Sample Makefile
# the compiler: gcc for C program, define as g++ for C++
CC = gcc

# compiler flags:
#  -g adds debugging information to the executable file
#  -Wall turns on most, but not all, compiler warnings
#  -(optimize) code: -O0, -O1, -O2, -O3
CFLAGS = -g -Wall -O0

# the build target executable:
CC = gcc

TARGET = main

all: $(TARGET).c
	$(CC) $(CFLAGS) -o $(TARGET) $(TARGET).c
	@echo "build done"
clean:
	rm -f $(TARGET)
	@echo "remove done"
