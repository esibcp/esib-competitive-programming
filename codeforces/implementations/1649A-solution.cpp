//author Elie Moutran
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int cases;
    cin >> cases;
    while (cases--){
        int amount;
        cin >> amount;
        vector<int> locs(amount);
        for (int i= 0; i < amount; ++i){
            cin >> locs[i];
        }

        int n = locs.size();
        int i,j; 
        // Looping forward in the vector to find the first occurence of 0
        for(i = 0; i < n; i++)
        {
            if(locs[i] == 0)
                break;
        }
        // Looping backwards in the vector to find the last occurence of 0
        for(j = n-1; j >= i ; j--)
        {
            if(locs[j] == 0)
                break;
        }
        
        // if i==n that means no zero was found
        if(i != n)
            cout<< j-i+2;
        else
            cout<< 0;
        
        cout<<endl;
    }
}
