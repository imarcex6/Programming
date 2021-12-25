#include<stdio.h>

int ult_dig(int num);

int ult_dig(int num){
    if (num == 0)
        return 1;
    else if (num <= 2)
        return num;
    else if (num == 3)
        return 6;
    else if (num == 4)
        return 4;
    else return 0;
}

int main() {

    int casos, num, i;

    scanf("%d", &casos);

    for (i = 0; i < casos; i++) {
        scanf("%d", &num);
        printf("%d\n", ult_dig(num));
    }

    return 0;
}