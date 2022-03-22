// Author Emmanuel Abdelnour
// Approach with sorting, bad complexity (O(nlog(n))), accepted on codeforces.

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t>0){
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];
        sort(v.begin(), v.end());
        cout << v[n - 1] + v[n - 2] << endl;
        t--;
    }
}

