#include <stdio.h>
#include <string.h>

/// @brief Disegna il logo della JUVE
void forzaJuve() {
    printf("████████████████\n");
    printf("█▒▒▒▒▒▒▒▒▒██▒▒▒█\n");
    printf("█▒▒▒▒▒▒▒▒▒██▒▒▒█\n");
    printf("███████▒▒▒██▒▒▒█\n");
    printf("███████▒▒▒██▒▒▒█\n");
    printf("███████▒▒▒██▒▒▒█\n");
    printf("███████▒▒▒██▒▒▒█\n");
    printf("███████▒▒▒██▒▒▒█\n");
    printf("██████▒▒▒▒██▒▒▒█\n");
    printf("█████▒▒▒▒███▒▒▒█\n");
    printf("██▀▒▒▒▒▒███▀▒▒▒█\n");
    printf("██▒▒▒▒▄██▀▒▒▒▒██\n");
    printf("███████▀▒▒▒▒▄███\n");
    printf("█████▒▒▒▒▒▄█████\n");
    printf("████████████████\n");
}

/// @brief Disegna il logo del NAPOLI
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

void lamp(){
    printf("      ________       \n");
    printf("     /    |  \\     \n");
    printf("    /     |   \\    \n");
    printf("   /      |    \\   \n");
    printf("  /       |     \\  \n");
    printf(" /        |      \\ \n");
    printf("|_________|_______|\n");
    printf("       |||         \n");
    printf("       |||         \n");
    printf("       UUU         \n");
}

void draw(const char* s) {
    if(strcmp(s, "juve") == 0) forzaJuve();
    if(strcmp(s, "lamp") == 0) lamp();
    if(strcmp(s, "nap") == 0) forzaNapoli();
}