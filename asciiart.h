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

void draw(const char* s) {
    if(strcmp(s, "juve") == 0) forzaJuve();
}