#include <stdio.h>
#include <string.h>

/// @brief Disegna il logo della JUVE
void forzaNapoli() {
    printf("███     ███\n");
    printf("████    ███\n");
    printf("██ ██   ███\n");
    printf("██  ██  ███\n");
    printf("██   ██ ███\n");
    printf("██    █████\n");
    printf("██     ████\n");
    printf("██      ███\n");
}

void draw(const char* s) {
    if(strcmp(s, "nap") == 0) forzaNapoli();
}