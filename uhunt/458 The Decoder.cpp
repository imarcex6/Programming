#include<bits/stdc++.h>

using namespace std;

int main() {

    string frase;
    while(getline(cin,frase)) {
        for (char i : frase) {
            if (i != ' ') printf("%c", i-7);
            else printf("%c", i);
        }
        cout << "\n";
    }

    return 0;
}