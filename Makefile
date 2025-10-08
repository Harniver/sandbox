CC = gcc
CFLAGS = -g -Wall -Wextra -Wpedantic -Wconversion

SRCS = sample.c asciiart.h   # Assicurati che esistano
OBJS = $(SRCS:.c=.o)

program: $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

# Regola generica per compilare .c in .o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) program
