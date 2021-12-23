#include<stdio.h>
#include<string.h>

int contar_char(char cadena[1000], char letra, int posicion);

int main() {

    char cadena[1000];
    char letra;

    scanf("%s ", cadena);
    scanf("%c", &letra);

    printf("%d", contar_char(cadena, letra, 0));

    return 0;
}

int contar_char(char cadena[100], char letra, int posicion){
    int longitud = strlen(cadena);
    if (longitud == posicion){
        return 0;
    }
    if (cadena[posicion] == letra){
        return 1 + contar_char(cadena, letra, posicion + 1);
    } else {
        return 0 + contar_char(cadena, letra, posicion + 1);
    }
}