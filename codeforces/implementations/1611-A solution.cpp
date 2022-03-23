
#include <bits/stdc++.h>
using namespace std;

int main(){
    int cases;
    cin >> cases;
    while(cases--){
        string number;
        cin >> number;
        if((number[number.size()-1]%2)==0){
            cout << 0 << endl;
            continue;
        }
        if((number[0]-'0')%2==0){
            cout << 1 << endl;
            continue;
        }
        bool flag = false;
        for(auto & c : number){
            if((c-'0')%2==0){
                flag = true;
                cout << 2 << endl;
                break;
            }
        }
        if (!flag){
            cout << -1 << endl;
        }
    }
}