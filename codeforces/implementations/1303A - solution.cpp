#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int begin = 0;
        int end = s.size() - 1;
        // find the first '1'
        for(int i(0); i < s.size(); ++i){
            if(s[i] == '1'){
                begin = i;
                break;
            }
        }
        // find the last '1'
        for(int i(s.size() - 1); i >= 0; --i){
            if(s[i] == '1'){
                end = i;
                break;
            }
        }
        // count zeroes between the first '1' and the last '1'
        int ops = 0;
        while(begin < end){
            if(s[begin++] == '0') ++ops;
        }
        cout << ops << endl;
    }
}