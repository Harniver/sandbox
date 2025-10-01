#include <stdio.h>
#include "asciiart.h" 

void draw(char s) {
    if(s == 'A'){
        stampaCuore();
    } else if(s == 'B'){
        stampaStella();
    } else if(s == 'C'){
        stampaFaccina();
    } else {
        printf("Invalid.\n");
    }
}

int main(){
    char insert = 0; 
    printf("Insert a letter between A, B, C:\n");

    do {
        scanf(" %c", &insert);
    } while(insert != 'A' && insert != 'B' && insert != 'C');

    draw(insert);

    return 0;
}
