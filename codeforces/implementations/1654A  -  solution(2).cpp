// Authors : Emmanuel Abdelnour, Elie Moutran
// Approach with O(n) Complexity, accepted on codeforces.

#include <bits/stdc++.h>
using namespace std;

void swap(int &a, int &b){
    a = a + b;
    b = a - b;
    a = a - b;
}

int main(){
    int t;
    cin >> t;
    while(t>0){
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];
        int max1 = v[0];
        int max2 = v[1];
        if(v[1]>v[0]) swap(max1, max2);
        for (int i = 2; i < n; i++)
        {
            if(v[i] >= max1) {
                max2 = max1; 
                max1 = v[i];
            }
            if(v[i] < max1 && v[i] > max2) max2 = v[i];
        }
        cout << max1 + max2 << endl;
        t--;
    }
}
