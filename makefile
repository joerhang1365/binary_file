CC=gcc
CFLAGS=-Wall -Werror -Wpedantic
LDFLAGS=-lm
PROJECT_NAME=make_binary

build: main.c
	$(CC) $(CFLAGS) $(LDFLAGS) -o $(PROJECT_NAME) main.c $(SOURCE_FILES)

clean:
	rm -f $(PROJECT_NAME)
