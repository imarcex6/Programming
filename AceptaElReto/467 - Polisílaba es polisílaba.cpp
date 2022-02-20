#include <bits/stdc++.h>

using namespace std;

int case_insensitive_match(string s1, string s2) {
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
    if(s1.compare(s2) == 0)
        return 1;
    return 0;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int cases; cin >> cases;
    for (int l = 0; l < cases; ++l)
    {
        string palabra1, y, palabra2;
        cin >> palabra1 >> y >> palabra2;
        if(case_insensitive_match(palabra1, palabra2)) cout << "TAUTOLOGIA\n";
        else cout << "NO TAUTOLOGIA\n";
    }

    return 0;
}