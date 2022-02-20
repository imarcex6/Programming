#include <stdio.h>

int main(){

    int n, palomas, habitaciones, i;
    scanf("%d", &n);

    for (i = 0; i < n; i ++){
        scanf("%d %d", &palomas, &habitaciones);
        if (palomas <= habitaciones){
            printf("ROMANCE\n");
        }
        else {
            printf("PRINCIPIO\n");
        }
    }

    return 0;
}