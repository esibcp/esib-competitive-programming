#include <bits/stdc++.h>


//Auhtor meron 
using namespace std;

//The idea of the solution lies in the fact that we cannot swap the positions in the following cases:
// 2 numbers are even, 2 numbers are odd
// What will eventually happen, is that our vector can be divided in the following way
// evens and odds
// for example : 2 9 6 7 10 => [2,6,10] [9,7]
// Since two odd numbers can never be swapped, and they are in the wrong order here, the list can never be sorted.

int main() {
    int cases;
    cin >> cases;
    while (cases--){
        int size;
        cin >> size;
        vector<int> v(size);
        for(int i=0; i<size;++i) {
            cin >> v[i];
        }
        bool flag = true;
        int min_even=0;
        int min_odd =1;

        //In this loop we're just checking if the even and odd virtual lists are already sorted
        for (int i=0; i<size;++i){
            if(v[i]%2==0){
                if (v[i]<min_even){
                    flag=false;
                    break;
                }
                else{
                    min_even=v[i];
                }
            }
            else{
                if(v[i]<min_odd){
                    flag=false;
                    break;
                }
                else{
                    min_odd=v[i];
                }
            }
        }
        //Ternary operator to print yes or no
        flag ? cout << "YES" << endl : cout << "NO" << endl;
    }
}