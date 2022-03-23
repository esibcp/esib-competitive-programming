// Emmanuel Abdelnour
// Two Pointers approach, O(n) time and memory.
// Accepted on codeforces.

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> input(n);
        for(int i = 0; i < n; i++) cin >> input[i];
        int start = 0;
        int end = n - 1;
        while(start <= end){
            if(start == end){
                cout<< input[start];
                break;
            }
            cout << input[start] << " " << input[end] << " ";
            ++start;
            --end;
        }
        cout << endl;
    }
    return 0;
}