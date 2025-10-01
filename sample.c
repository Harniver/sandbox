#include <stdio.h>
#include "asciiart.h"

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s <AN_ASCII_TEXT>\n", argv[0]);
        return 1;
    }

    draw(argv[1]);
    return 0;
}