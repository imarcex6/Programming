#include <bits/stdc++.h>
using namespace std;

char letra[23] = {'T', 'R', 'W', 'A', 'G', 'M', 'Y', 'F', 'P', 'D', 'X', 'B', 'N', 'J', 'Z', 'S', 'Q', 'V', 'H', 'L', 'C', 'K', 'E'};

int busqueda (char caracter) {
    for (int i = 0; i < 23; ++i) {
        if (letra[i] == caracter) {
            return i;
        }
    }
}

int contarErrores (string dni) {
    int contador = 0;
    for (int i = 0; i < 8; ++i) {
        if (dni[i] == '?') contador++;
    }
    return contador;
}

void posicionesDni (int * v, string dni) {
    int k = 0;
    for (int i = 0; i < 8; ++i) {
        if (dni [i] == '?') {
            v[k] = i;
            k++;
        }
    }
}

int posiblesDni (string dni, int errores, int modulo, int * v) {
    dni.pop_back(); int contador = 0;
    char numeros [10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    switch (errores) {
        case 4:
            for (char numero : numeros) {
                dni[v[0]] = numero;
                for (char numero1 : numeros) {
                    dni[v[1]] = numero1;
                    for (char numero2: numeros) {
                        dni[v[2]] = numero2;
                        for (char numero3: numeros) {
                            dni[v[3]] = numero3;
                            if (stoi(dni) % 23 == modulo) contador++;
                        }
                    }
                }
            }
            break;
        case 3:
            for (char numero : numeros) {
                dni[v[0]] = numero;
                for (char numero1 : numeros) {
                    dni[v[1]] = numero1;
                    for (char numero2: numeros) {
                        dni[v[2]] = numero2;
                        if (stoi(dni) % 23 == modulo) contador++;
                    }
                }
            }
            break;
        case 2:
            for (char numero : numeros) {
                dni[v[0]] = numero;
                for (char numero1 : numeros) {
                    dni[v[1]] = numero1;
                    if (stoi(dni) % 23 == modulo) contador++;
                }
            }
            break;
        case 1:
            for (char numero : numeros) {
                dni[v[0]] = numero;
                if (stoi(dni) % 23 == modulo) contador++;
            }
            break;
    }
    return contador;
}

int main() {

    int n; scanf("%d", &n);

    for (int i = 0; i < n; ++i) {
        string dni; cin >> dni;
        int modulo = busqueda(dni[8]);
        int errores = contarErrores(dni);
        int pos[errores];
        posicionesDni(pos, dni);
        printf("%d\n",posiblesDni(dni, errores, modulo, pos));
    }

    return 0;
}
