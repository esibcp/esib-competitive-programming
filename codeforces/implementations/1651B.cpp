#include <bits/stdc++.h>
using namespace std;

/*
Problem 1651B: B. Prove Him Wrong
Author: Charbel Farah, Emmanuel AbdelNour
Accepted by Codeforces O(n) solution.
*/

int main() {
    int cases = 0;
    cin >> cases;
    while (cases--) {
        int array_size = 0;
        cin >> array_size;
        if (array_size >= 20) {
            cout << "NO" << endl;
        }
        else {
            long long int tmp = 1;
            cout << "YES" << endl;
            for (int i = 0; i < array_size; ++i) {
                cout << tmp << " ";
                tmp *= 3;
            }
            cout << endl;
        }  
    }
    return 0;
}