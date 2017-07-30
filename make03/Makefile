CC = gcc
CFLAGS = -g -Wall -O0
LIBS=$(wildcard inc/*)
INC_PATH=inc/
TARGET = main

all: clean builds
	$(CC) src/$(TARGET).c builds/* -I$(INC_PATH) -o $(TARGET)

builds:
	mkdir builds/
	for dir in $(LIBS); do \
		cd $$dir; \
		$(CC) $(CFLAGS) -c *.c -I../; \
		mv *.o ../../builds; \
		cd -; \
	done

clean:
	rm -rf builds/ $(TARGET)
