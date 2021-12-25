#include<bits/stdc++.h>
using namespace std;

bool balanced(string frase);

int main() {

    char letra;
    string frase;
    while(getline(cin, frase)) {
        printf(balanced(frase) ? "YES\n" : "NO\n");
    }
    return 0;
}

bool balanced(string frase) {
    vector<char> simbolos;
    char x;
    for (int i = 0; i < frase.length(); i++) {
        if (frase[i] == '(' || frase[i] == '{' || frase[i] == '[') {
            simbolos.push_back(frase[i]);
            continue;
        }
        switch(frase[i]) {
            case ')':
                if (simbolos.empty()) return false;
                x = simbolos.back();
                simbolos.pop_back();
                if (x != '(') return false;
                break;
            case '}':
                if (simbolos.empty()) return false;
                x = simbolos.back();
                simbolos.pop_back();
                if (x != '{') return false;
                break;
            case ']':
                if (simbolos.empty()) return false;
                x = simbolos.back();
                simbolos.pop_back();
                if (x != '[') return false;
                break;
            default:
                continue;
        }
    }
    if (simbolos.empty()) return true;
    else return false;
}
