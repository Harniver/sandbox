CC = gcc
CFLAGS = -g -Wall -Wextra -Wpedantic -Wconversion
COMMON_DEPS = src/*.h Makefile folders

ascii_art: obj/ascii_art.o $(COMMON_DEPS)
	$(CC) obj/ascii_art.o -o bin/ascii_art

obj/ascii_art.o: src/sample.c $(COMMON_DEPS)
	$(CC) $(CFLAGS) -c src/sample.c -o obj/ascii_art.o

folders:
	@mkdir -p obj/ bin/

clean:
	rm -rf obj/ bin/
	@echo "Pulizia file completata! >:)"

rebuild: clean all
