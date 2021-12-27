#include <stdio.h>
#include <string.h>

void reverseWord (char word [256], int pos);

void reverseNumber (int num, int solution, int multiplo10);

int main() {

    char inputs [256]; scanf("%s", inputs);

    for (int i = 0; i < strlen(inputs); ++i) {
        int num;
        char word [256];
        switch (inputs[i]) {
            case 'N':
                scanf("%d", &num);
                reverseNumber(num, 0, 1);
                break;
            case 'W':
                scanf("%s", word);
                reverseWord(word, strlen(word)-1);
                break;
        }
    }

    return 0;
}

void reverseWord (char word [256], int pos) {
    if (pos >= 0) {
        printf("%c", word[pos]);
        reverseWord(word, pos - 1);
    } else {
        printf("\n");
    }
}

void reverseNumber (int num, int solution, int multiplo10) {
    if (num != 0) {
        reverseNumber (num/10, solution + (10 - num%10) * multiplo10, multiplo10 * 10);
    } else {
        printf("%d\n", solution);
    }
}