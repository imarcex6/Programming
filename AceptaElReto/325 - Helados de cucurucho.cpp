#include<bits/stdc++.h>

using namespace std;

int main ()
{
    int cases; cin >> cases;
    bool continuar;
    while(cases--)
    {
        int C,V; cin >> C >> V;
        string generado = "";
        for (int i = 0; i < C; ++i) generado += "C";
        for (int i = 0; i < V; ++i) generado += "V";

        do{
            cout << generado;
            continuar = next_permutation(generado.begin(), generado.end());
            if (continuar) cout << " ";
        }while(continuar);

        cout << "\n";
    }
    return 0;
}