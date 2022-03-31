#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int start = 0;
        int end = start + 1;
        while(end < s.length()){
            if(s[start] == s[end]) {start++; end = start + 1;}
            else end++;
        }
        for(int i = start; i < s.length(); i++) cout << s[i];
        cout << endl;
    }
}