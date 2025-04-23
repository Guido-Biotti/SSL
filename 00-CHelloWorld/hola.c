#include <stdio.h>

int main(){
    FILE *archivo;
    archivo = fopen("output.txt","w");

    fprintf(archivo, "Hola Mundo!\n");

    fclose(archivo);

    printf("Hola Mundo!\n");
    
    return 0;
}