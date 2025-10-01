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

void Lamp(){
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

void Cat(){
    printf("  ^       ^ \n");
    printf("  |_______| \n");
    printf(" /       \\\n");
    printf("|  O   O  |\n");
    printf("|    ^    |\n");
    printf("|   '-'   |\n");
    printf(" \\_______/\n");
}

void draw(const char* s) {
    if(strcmp(s, "cat") == 0) Cat();
    if(strcmp(s, "lamp") == 0) lamp();
    if(strcmp(s, "nap") == 0) forzaNapoli();
}