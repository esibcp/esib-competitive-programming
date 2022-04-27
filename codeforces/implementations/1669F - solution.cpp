#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int alice = 0;
        int bob = n - 1;
        vector<int> candies(n);
        for(int i(0); i < n; ++i) cin >> candies[i];
        int sumAlice(candies[alice]), sumBob(candies[bob]);
        int eaten(2), res(0);
        while(alice < bob){
            if(sumAlice < sumBob) {
                sumAlice += candies[++alice];
                ++eaten;
            }
            else if(sumAlice > sumBob){
                sumBob += candies[--bob];
                ++eaten;
            }
            else{
                res = eaten;
                sumBob += candies[--bob];
                sumAlice += candies[++alice];
                eaten += 2;
            }
        }
        cout << res << endl;
    }
}