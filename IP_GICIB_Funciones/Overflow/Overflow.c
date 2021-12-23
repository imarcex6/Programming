#include<stdio.h>

int bufferCheck(int n);

int main(int argc, char * argv[]) {

    int n;

    scanf("%d", &n);

    if (bufferCheck(n)){
        printf("OK");
    } else {
        printf("BUFFER OVERFLOW");
    }

    return 0;
}

int bufferCheck(int n){
    int num;
    scanf("%d", &num);

    if (num >= 0){
        return bufferCheck(n - 1);
    } else {
        if (n >= 0){
            return 1;
        } else {
            return 0;
        }
    }
}