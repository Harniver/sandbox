CC = gcc
CFLAGS = -g -Wall -Wextra -Wpedantic -Wconversion

SRCS = sample.c asciiart.h   
OBJS = $(SRCS:.c=.o)

program: $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) program
