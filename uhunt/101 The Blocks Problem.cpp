#include<bits/stdc++.h>

using namespace std;

int main() {
    int blocks; cin >> blocks;
    deque<int> mesa[blocks];
    int position[blocks];
    for (int i = 0; i < blocks; ++i) {
        mesa[i].push_back(i);
        position[i] = i;
    }
    string orden;
    while (cin >> orden && orden != "quit") {
        int a, b; string orden2; cin >> a >> orden2 >> b;
        if (position[a] != position[b]) {
            if (orden == "move") {
                if (orden2 == "over") {
                    // MOVE A OVER B
                    int last = mesa[position[a]].back();
                    while (last != a) {
                        mesa[position[last]].push_back(last);
                        position[last] = last;
                        mesa[position[a]].pop_back();
                        last = mesa[position[a]].back();
                    }
                    mesa[position[a]].pop_back();
                    position[a] = position[b];
                    mesa[position[b]].push_back(a);
                } else {
                    // MOVE A ONTO B
                    int last = mesa[position[a]].back();
                    while (last != a) {
                        mesa[last].push_back(last);
                        position[last] = last;
                        mesa[position[a]].pop_back();
                        last = mesa[position[a]].back();
                    }
                    mesa[position[a]].pop_back();
                    last = mesa[position[b]].back();
                    while (last != b) {
                        mesa[last].push_back(last);
                        position[last] = last;
                        mesa[position[b]].pop_back();
                        last = mesa[position[b]].back();
                    }
                    position[a] = position[b];
                    mesa[position[b]].push_back(a);
                }
            } else {
                if (orden2 == "over") {
                    int auxpos = position[a];
                    bool found = false;
                    for (auto x : mesa[position[a]]) {
                        if (x == a) found = true;
                        if (found) {
                            mesa[position[b]].push_back(x);
                            position[x] = position[b];
                        }
                    }
                    while (mesa[auxpos].back() != a) mesa[auxpos].pop_back();
                    mesa[auxpos].pop_back();
                } else {
                    int last = mesa[position[b]].back();
                    while (last != b) {
                        mesa[last].push_back(last);
                        position[last] = last;
                        mesa[position[b]].pop_back();
                        last = mesa[position[b]].back();
                    }
                    int auxpos = position[a];
                    bool found = false;
                    for (auto x : mesa[position[a]]) {
                        if (x == a) found = true;
                        if (found) {
                            mesa[position[b]].push_back(x);
                            position[x] = position[b];
                        }
                    }
                    while (mesa[auxpos].back() != a) mesa[auxpos].pop_back();
                    mesa[auxpos].pop_back();
                }
            }
        }
    }
    for (int i = 0; i < blocks; ++i) {
        cout << i << ":";
        for (auto x : mesa[i]){
            cout << " " << x;
        }
        cout << "\n";
    }

    return 0;
}