#include<stdio.h>

int triangulos(int l);

int triangulos(int l){
    if (l == 1){
        return 3;
    }
    return l*3 + 3*triangulos(l/2);
}

int main() {

    int n;
    scanf("%d", &n);

    printf("%d", triangulos(n));

    return 0;
}
