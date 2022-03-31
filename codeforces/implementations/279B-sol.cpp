#include <bits/stdc++.h>


using namespace std;

int main(){
    int number;
    int time;

    cin >> number >> time;
    vector<int> books(number);
    for(int i=0; i<number; ++i){
        cin >> books[i];
    }

    int j=-1; int sum=0; int maxi=0;
    for(int i=0; i<number;++i){
        if(sum+books[i]<=time){
            sum+=books[i];
        }
        else{
            sum+=books[i];
            //we need to remove all the elements on the left until the sum is smaller than time.
            while(sum>time){
                j++;
                sum-=books[j];
            }
        }
        maxi=max(maxi,i-j);
    }
    cout << maxi << endl;
}