#include<bits/stdc++.h>
using namespace std;

int maxSum(int * arr, int n, int necesarios, int racimos);

int main() {
    int racimos, necesarios;

    while(scanf("%d %d", &racimos, &necesarios) != EOF && (racimos != 0 && necesarios != 0)){
        int n, m = 0;
        int maximo = INT_MAX, suma = 0;
        int * v = (int *) malloc(sizeof(int) * racimos);
        for (int i = 0; i < racimos; ++i) {
            scanf("%d", &n);
            v[i] = n;
        }
        maximo = maxSum(v, necesarios/3, necesarios, racimos);
        printf(maximo < necesarios || maximo == INT_MAX ? "IMPOSIBLE\n" : "%d\n", maximo);
        free (v);
    }
    return 0;
}

int maxSum(int arr[], int n, int necesarios, int racimos) {
    int max_sum = INT_MAX;
    int i = 0;
    while (i < racimos && max_sum != necesarios) {
        int current_sum = 0;
        int j = 0;
        while (current_sum < necesarios && j+i < racimos) {
            current_sum += arr [i + j];
            j++;
        }
        if (current_sum < necesarios) current_sum = INT_MAX;
        max_sum = min(current_sum, max_sum);
        i++;
    }
    return max_sum;
}