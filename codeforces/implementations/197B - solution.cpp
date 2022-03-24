// Author Elie Moutran
#include <bits/stdc++.h>
using namespace std;

int gcd (int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd (b, a % b);
}

int main(){
    int p_deg, q_deg;
    cin >> p_deg >> q_deg;
    vector<int> p_vals(p_deg + 1), q_vals(q_deg + 1);

    for(int i=0; i <= p_deg; ++i){
        cin >> p_vals[i];
    }
    for(int i=0; i <= q_deg; ++i){
        cin >> q_vals[i];
    }
    
    int deg_diff = p_deg - q_deg;
    if (deg_diff == 0 ){
        int tmp = gcd(p_vals[0], q_vals[0]);
        if (q_vals[0] * p_vals[0] < 0){
            cout << "-" << abs((p_vals[0])/tmp) << "/" << abs((q_vals[0])/tmp);
        }
        else{
            cout << (p_vals[0])/tmp << "/" << (q_vals[0])/tmp;
        }
    }
    else if (deg_diff > 0){
        if (p_vals[0]*q_vals[0] < 0){
            cout << "-Infinity";
        }
        else{
            cout << "Infinity";
        }
    }
    else{
        cout << "0/1";
    }

    
}
