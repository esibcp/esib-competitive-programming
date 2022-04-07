#include<bits/stdc++.h>
using namespace std;

int main(){
    int lower(0), upper(0);
    string str;
    cin >> str;
    for(int i = 0; i < str.length(); i++) {
        if(str[i] >= 'A' && str[i] <= 'Z') upper++;
        else if(str[i] >= 'a' && str[i] <= 'z') lower++;
    }
    for(int i = 0; i < str.length(); i++) {
        if(lower >= upper){
            if(str[i] >= 'A' && str[i] <= 'Z') str[i] += 32;
        }
        else{
            if(str[i] >= 'a' && str[i] <= 'z') str[i] -= 32;
        }
    }
    cout << str << endl;
}