#include <bits/stdc++.h>

using namespace std;

int main() {
    int cases; cin >> cases;
    while (cases--)
    {
        char unidad1, unidad2;
        int medida1, medida2, v = 0, d = 0, t = 0;
        scanf("\n%c=%d \n%c=%d", &unidad1, &medida1, &unidad2, &medida2);
        if(unidad1 == 'V') v=medida1;
        else if (unidad1 == 'D') d = medida1;
        else t = medida1;

        if(unidad2 == 'V') v=medida2;
        else if (unidad2 == 'D') d = medida2;
        else t = medida2;

        if (!v) {
            v = d/t;
            printf("V=%d\n", v);
        } else if (!d) {
            d = v*t;
            printf("D=%d\n", d);
        } else {
            t = d/v;
            printf("T=%d\n", t);
        }
    }
    return 0;
}