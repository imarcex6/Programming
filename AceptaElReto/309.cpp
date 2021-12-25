#include <bits/stdc++.h>

using namespace std;

int main() {

    int N; scanf("%d", &N);

    for (int i = 0; i < N; ++i) {
        int num1, num2;
        char op;
        scanf("%d %c %d ", &num1, &op, &num2);
        if (op == '+') num1 += num2;
        else num1 -= num2;
        printf("%d", num1);
        while(scanf("%c", &op) == 1 && op != '.'){
            scanf(" %d ", &num2);
            if (op == '+') num1 += num2;
            else num1 -= num2;
            printf(", %d", num1);
        }
        printf("\n");
    }

    return 0;
}