//Author : Maroun Ayli
#include <bits/stdc++.h>
using namespace std;

int main(){
    int cases;
    cin >> cases;
    while(cases--) {
        int a, b;

        cin >> a;
        cin >> b;

        if(a==0 && b==0){
            cout << 0 << endl;
            continue;
        }
        if (sqrt(pow(a,2)+ pow(b,2))== (int)(sqrt(pow(a,2)+pow(b,2)))){
            cout << 1 << endl;
            continue;
        }
        cout << 2 << endl;
    }
}