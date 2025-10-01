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

void forzaJuve() {
    printf("       ██████       \n");
    printf("      ████████      \n");
    printf("     ███    ███     \n");
    printf("    ███      ███    \n");
    printf("   ███JUVENTUS███   \n");
    printf("   ███  ████  ███   \n");
    printf("   ███  ████  ███   \n");
    printf("   ███  ████  ███   \n");
    printf("    ███      ███    \n");
    printf("     ███    ███     \n");
    printf("      ████████      \n");
    printf("       ██████       \n");
}

void draw(const char* s) {
    if(strcmp(s, "nap") == 0) forzaNapoli();
    if(strcmp(s, "juve") == 0) forzaJuve();
}