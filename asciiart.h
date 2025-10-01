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
/// @brief Draws the monalisa
void monalisa()
{
    printf("         o8%8888,\n");
    printf("      o88%8888888.                     \n");
    printf("     8'-    -:8888b                    \n");
    printf("    8'         8888                   \n");
    printf("   d8.-=. ,==-.:888b                  \n");
    printf("   >8 `~` :`~' d8888                  \n");
    printf("   88         ,88888                 \n");
    printf("   88b. `-~  ':88888                   \n");
    printf("   888b v=v~ .:88888                    \n");
    printf("   88888o--:':::8888                    \n");
    printf("    `88888| :::' 8888b                      \n");
    printf("    8888^^'       8888b              \n");
    printf("    d888           ,%888b.            \n");
    printf("    d88%            ,?888--'-.         \n");
    printf(" /88:.__ ,       _%-' ---  -         \n");
    printf("     '''::===..-'   =  --.  `");
}

void draw(const char* s) {
    if(strcmp(s, "juve") == 0) forzaJuve();
    if(strcmp(s, "kirby") == 0) kirby();
    if(strcmp(s, "cat") == 0) Cat();
    if(strcmp(s, "Lamp") == 0) Lamp();
    if(strcmp(s, "nap") == 0) forzaNapoli();

    if(!strcmp(s, "monalisa")) monalisa(); 
    if(strcmp(s, "juve2") == 0) forzaJuve2();

}

