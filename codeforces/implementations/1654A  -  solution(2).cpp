// Authors : Emmanuel Abdelnour, Elie Moutran
// Better Approach with O(n) Complexity, accepted on codeforces.

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
        max1 = max(vec[0], vec[1]);
        max2 = min(vec[0], vec[1]);
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
