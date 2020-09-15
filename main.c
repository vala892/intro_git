#include <stdio.h>

int main() {
    char nombre[100];
    unsigned int edad;

    printf("hola mundo\n");
    printf("nombre: ");
    fgets(nombre, sizeof(nombre), stdin);
    printf("hola %s", nombre);
    printf("Edad: ");
    scanf("%u", &edad);
    printf("vas a cumplir %u", edad + 1);

    return 0;
}