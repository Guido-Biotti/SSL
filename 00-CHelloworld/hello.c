#include <stdio.h>
int main(void) {
    FILE* fichero;
    fichero = fopen("hello.txt", "wt");
    fputs("Hello, World!\n", fichero);
    fclose(fichero);
    printf("Hello, World!\n");
}
