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

void forzaJuve2() {
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

void Cat(){
    printf("  ^       ^ \n");
    printf("  |_______| \n");
    printf(" /       \\\n");
    printf("|  O   O  |\n");
    printf("|    ^    |\n");
    printf("|   '-'   |\n");
    printf(" \\_______/\n");
}

void kirby(){

    printf("⠀⠀⠀⠀⠀⠀⣠⢤⠀⠀⠀⠀⣠⢤⡀⠀⠀⠀⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⢸⣅⣨⣇⠀⠀⠀⣇⣀⣇⠀⠀⠀⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⢸⣿⣿⡷⠀⠀⠀⣿⣿⣿⠀⠀⠀⠀⠀\n");
    printf("⢠⠒⠀⠒⢤⠘⢯⡽⠁⠀⠀⠀⢷⣭⠇⢀⠤⠀⠠⢄\n");
    printf("⠈⠒⠀⠘⠊⠀⠀⠀⠈⠒⠒⠊⠀⠀⠀⠈⠂⠭⠭⠞\n");

}

void draw(const char* s) {
    if(strcmp(s, "juve") == 0) forzaJuve();
    if(strcmp(s, "kirby") == 0) kirby();
    if(strcmp(s, "cat") == 0) Cat();
    if(strcmp(s, "lamp") == 0) lamp();
    if(strcmp(s, "nap") == 0) forzaNapoli();
    if(strcmp(s, "juve2") == 0) forzaJuve2();
}

