// author Elie Moutran

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll gcd (ll a, ll b) {
    if (b == 0)
        return a;
    else
        return gcd (b, a % b);
}


int main(){
    int cases;
    cin>>cases;
    while(cases--)
    {
        int n;
        cin>>n;
        vector<ll> v(n);
        
        ll ans1(0),ans2=0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            if(i%2)
                ans1=gcd(ans1,v[i]); // finding the gcd of odd indexes values
            else
                ans2=gcd(ans2,v[i]); // finding the gcd of even indexes values
        }
        
        int flag=0;
        for(int i=0;i<n;i+=2){
        // checking if values on even indexes have common divisors with the gcd of odd indexes
            if(v[i]%ans1==0)
            {
               flag=1;
                break;
            }
        }
        if(flag==0){
            cout<<ans1<<"\n";
            continue;
        }
        
        flag=0;
        for(int i=1;i<n;i+=2){
        // checking if values on odd indexes have common divisors with the gcd of even indexes
            if(v[i]%ans2==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0){
            cout<<ans2<<"\n";
            continue;
        }
        
        cout<<0<<"\n";
    }
    return 0;

}