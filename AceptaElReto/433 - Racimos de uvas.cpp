#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    while (scanf("%d", &n) == 1 && n != 0)
    {
        int res = 1;
        while ((res*(res+1))/2 < n) res++;
        printf("%d\n", res);
    }


    return 0;
}