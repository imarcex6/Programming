#include<stdio.h>

int patron(int n);

int patron(int n){
    if(n <= 1){
        return 1;
    } else{
        return patron(n-1) + patron(n-2);
    }
}

int main() {

    int n, c;
    scanf("%d", &n);

    for (int i = 0; i < n; i++){
        scanf("%d", &c);
        printf("%d\n",patron(c));
    }

    return 0;
}
