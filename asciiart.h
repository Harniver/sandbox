#ifndef ASCII_ART_H
#define ASCII_ART_H

#include <ctype.h>
#include <stdio.h>
#include <string.h>

void print_newline() {
    printf("\n");
}

void print_letter_a() {
    printf("  A  \n");
    printf(" A A \n");
    printf("AAAAA\n");
    printf("A   A\n");
    printf("A   A\n");
}

void print_letter_b() {
    printf("BBBB \n");
    printf("B   B\n");
    printf("BBBB \n");
    printf("B   B\n");
    printf("BBBB \n");
}

void print_letter_c() {
    printf(" CCCC\n");
    printf("C    \n");
    printf("C    \n");
    printf("C    \n");
    printf(" CCCC\n");
}

void print_letter_d() {
    printf("DDDD \n");
    printf("D   D\n");
    printf("D   D\n");
    printf("D   D\n");
    printf("DDDD \n");
}

void print_letter_e() {
    printf("EEEEE\n");
    printf("E    \n");
    printf("EEE  \n");
    printf("E    \n");
    printf("EEEEE\n");
}

void print_letter_f() {
    printf("FFFFF\n");
    printf("F    \n");
    printf("FFF  \n");
    printf("F    \n");
    printf("F    \n");
}

void print_letter_g() {
    printf(" GGGG\n");
    printf("G    \n");
    printf("G  GG\n");
    printf("G   G\n");
    printf(" GGG \n");
}

void print_letter_h() {
    printf("H   H\n");
    printf("H   H\n");
    printf("HHHHH\n");
    printf("H   H\n");
    printf("H   H\n");
}

void print_letter_i() {
    printf("IIIII\n");
    printf("  I  \n");
    printf("  I  \n");
    printf("  I  \n");
    printf("IIIII\n");
}

void print_letter_j() {
    printf("JJJJJ\n");
    printf("    J\n");
    printf("    J\n");
    printf("J   J\n");
    printf(" JJJ \n");
}

void print_letter_k() {
    printf("K   K\n");
    printf("K  K \n");
    printf("KKK  \n");
    printf("K  K \n");
    printf("K   K\n");
}

void print_letter_l() {
    printf("L    \n");
    printf("L    \n");
    printf("L    \n");
    printf("L    \n");
    printf("LLLLL\n");
}

void print_letter_m() {
    printf("M   M\n");
    printf("MM MM\n");
    printf("M M M\n");
    printf("M   M\n");
    printf("M   M\n");
}

void print_letter_n() {
    printf("N   N\n");
    printf("NN  N\n");
    printf("N N N\n");
    printf("N  NN\n");
    printf("N   N\n");
}

void print_letter_o() {
    printf(" OOO \n");
    printf("O   O\n");
    printf("O   O\n");
    printf("O   O\n");
    printf(" OOO \n");
}

void print_letter_p() {
    printf("PPPP \n");
    printf("P   P\n");
    printf("PPPP \n");
    printf("P    \n");
    printf("P    \n");
}

void print_letter_q() {
    printf(" QQQ \n");
    printf("Q   Q\n");
    printf("Q   Q\n");
    printf("Q  Q \n");
    printf(" QQ Q\n");
}

void print_letter_r() {
    printf("RRRR \n");
    printf("R   R\n");
    printf("RRRR \n");
    printf("R  R \n");
    printf("R   R\n");
}

void print_letter_s() {
    printf(" SSSS\n");
    printf("S    \n");
    printf(" SSS \n");
    printf("    S\n");
    printf("SSSS \n");
}

void print_letter_t() {
    printf("TTTTT\n");
    printf("  T  \n");
    printf("  T  \n");
    printf("  T  \n");
    printf("  T  \n");
}

void print_letter_u() {
    printf("U   U\n");
    printf("U   U\n");
    printf("U   U\n");
    printf("U   U\n");
    printf(" UUU \n");
}

void print_letter_v() {
    printf("V   V\n");
    printf("V   V\n");
    printf("V   V\n");
    printf(" V V \n");
    printf("  V  \n");
}

void print_letter_w() {
    printf("W   W\n");
    printf("W   W\n");
    printf("W W W\n");
    printf("WW WW\n");
    printf("W   W\n");
}

void print_letter_x() {
    printf("X   X\n");
    printf(" X X \n");
    printf("  X  \n");
    printf(" X X \n");
    printf("X   X\n");
}

void print_letter_y() {
    printf("Y   Y\n");
    printf(" Y Y \n");
    printf("  Y  \n");
    printf("  Y  \n");
    printf("  Y  \n");
}

void print_letter_z() {
    printf("ZZZZZ\n");
    printf("   Z \n");
    printf("  Z  \n");
    printf(" Z   \n");
    printf("ZZZZZ\n");
}

/*
 * @brief Draws the given string using ASCII art.
 */
void draw(const char *s) {
    for (int i = 0; i < strlen(s); i++) {
        char character = tolower(s[i]);
        if (character == 'a') {
            print_letter_a();
        } else if (character == 'b') {
            print_letter_b();
        } else if (character == 'c') {
            print_letter_c();
        } else if (character == 'd') {
            print_letter_d();
        } else if (character == 'e') {
            print_letter_e();
        } else if (character == 'f') {
            print_letter_f();
        } else if (character == 'g') {
            print_letter_g();
        } else if (character == 'h') {
            print_letter_h();
        } else if (character == 'i') {
            print_letter_i();
        } else if (character == 'j') {
            print_letter_j();
        } else if (character == 'k') {
            print_letter_k();
        } else if (character == 'l') {
            print_letter_l();
        } else if (character == 'm') {
            print_letter_m();
        } else if (character == 'n') {
            print_letter_n();
        } else if (character == 'o') {
            print_letter_o();
        } else if (character == 'p') {
            print_letter_p();
        } else if (character == 'q') {
            print_letter_q();
        } else if (character == 'r') {
            print_letter_r();
        } else if (character == 's') {
            print_letter_s();
        } else if (character == 't') {
            print_letter_t();
        } else if (character == 'u') {
            print_letter_u();
        } else if (character == 'v') {
            print_letter_v();
        } else if (character == 'w') {
            print_letter_w();
        } else if (character == 'x') {
            print_letter_x();
        } else if (character == 'y') {
            print_letter_y();
        } else if (character == 'z') {
            print_letter_z();
        } else if (character == '\n') {
            print_newline();
        }
    }
}

#endif //ASCII_ART_H