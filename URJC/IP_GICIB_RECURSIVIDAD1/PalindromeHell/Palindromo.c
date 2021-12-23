#include<stdio.h>
#include<string.h>

int palindromo(char cadena[100], int inicio, int final){
    if(final-inicio==1 || final==inicio){
        return 1;
    }
    else{
        if(cadena[inicio]==cadena[final]){
            return palindromo(cadena,inicio+1,final-1);
        }
        else{
            return 0;
        }
    }
}

int main() {

    int n, caso = 1, pos, ana=0, monica=0;
    char cadena [100];

    scanf("%d", &n);

    for (int i = 0; i < n; i++){
        scanf("%s", cadena);
        if (!caso){
            monica += palindromo(cadena, 0, strlen(cadena) - 1);
        } else{
            ana += palindromo(cadena, 0, strlen(cadena) - 1);
        }
        caso = !caso;
    }

    if (ana > monica){
        printf("%d %d ANA", ana, monica);
    } else if (monica > ana){
        printf("%d %d MONICA", ana, monica);
    } else {
        printf("%d %d EMPATE", ana, monica);
    }

    return 0;
}
