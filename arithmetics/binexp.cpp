#include <bits/stdc++.h>


using namespace std;


template<typename T>
long long binpower(T a , T b){
    if (b==0){
        return 1;
    }
    T res = ::binpower(a,b/2);
    if(b%2!=0){
        return (res * res * a );
    }
    else{
        return (res * res);
    }
}

// we want to compute x^n mod m
// to do this we use the property : (axb) mod m  =  (a mod m) x (b mod m) % m;
// in this case since we have x^n, we consider a and b are equal, and we name them res
// x^n mod m =  ((res mod m) * (res mod m) )mod m
template<typename T>
long long power(T a , T b , T m){
    if (b==0){
        return 1;
    }
    T res = ::power(a,b/2,m) % m;
    if(b%2!=0){
        return (res * res * a ) % m;
    }
    else{
        return (res * res) % m;
    }
}


int main(){
    cout << ::power<long long>(2,3,5) << endl;
    cout << ::power<long long>(2,2147483647,13) << endl;
    cout << ::power<int> (2,3,4);

}