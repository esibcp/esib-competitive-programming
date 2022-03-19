//Given an array and queries formed of two numbers (a,b) Write an efficient algorithm to respond to the following queries
// Q(a,b) => Sum(V[a] + V[a+1] + .... V[b]) 
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
int main(){

    int size;
    cin >> size;
    vector<int> v(size);
    for(int i=0; i<size;++i){
        cin >> v[i];
    }
    int queries;
    cin >> queries;
    vector<pair<int,int>> q(queries);
    for (int i=0; i<queries; ++i){
        cin >> q[i].first >> q[i].second;
    }
    //Construct sum so far;
    vector<ll> ssf;
    ll sum =0;
    ssf.push_back(0);
    for(int i=0; i<size; ++i){
        sum=sum+v[i];
        ssf.push_back(sum);
    }

    for (int i=0; i<queries;++i){
        cout << ssf[q[i].second] - ssf[q[i].first] << endl;
    }






}

