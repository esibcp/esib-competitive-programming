#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int T=1;
    cin >> T;
    while(T--){
        ll n,flag=0;
        cin >> n;
        ll a[n],ind=0;
        for(int i=0;i<n;i++){
            cin >> a[i];
            if(a[i]==1){
                ind=i;
                flag++;
            }
        }
        for(int i=1;i<n;i++){
            if(a[(ind+i)%n]>a[(ind+i-1+n)%n]+1){
                flag=0;
                break;
            }
        }
        if(flag==1){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
}