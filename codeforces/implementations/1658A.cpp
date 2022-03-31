#include <bits/stdc++.h>
using namespace std;

/*
Problem 1658A: A. Marin and Photoshoot
Author: Charbel Farah
Accepted by Codeforces O(n) solution.
*/

int main() {
    int num_cases = 0;
    cin >> num_cases;
    for (int i = 0; i < num_cases; ++i) {
        int initial_num = 0;
        cin >> initial_num;

        string cosplayers = "";
        cin >> cosplayers;

        int extras = 0;

        for (int i = 0; i < initial_num - 1; ++i) {
            if (cosplayers[i] == '0' && cosplayers[i + 1] == '0') {
                extras += 2;
            }
            else if (cosplayers[i] == '1' && cosplayers[i - 1] == '0' && cosplayers[i + 1] == '0') {
                extras += 1;
            }
        }
        cout << extras << endl;
    }
    return 0;
}