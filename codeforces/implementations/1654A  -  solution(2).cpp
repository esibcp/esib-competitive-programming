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
        // no need to call max before the loop  and start the loop at index 2.
        //Guarantee that the max will be changed by declaring it the smallest possible value
        //Gigachad move (meron)
        int max1 = INT32_MIN, max2 = INT32_MIN;
        for (int i = 0; i < n; i++)
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
