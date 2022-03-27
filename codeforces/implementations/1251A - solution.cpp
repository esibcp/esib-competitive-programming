// Emmanuel Abdelnour
// O(n) complexity.
// Accepted on Codeforces.

#include <bits/stdc++.h>
using namespace std;



int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        set<char> res; 
        // use a set to store characters sorted and unique
        int ptr = 0;
        int count = 1; 
        // when the ptr is on a certain character, we have 1
        // occurence of this character.
        while(ptr < s.size()){
            if(s[ptr] == s[ptr + 1]) count++;
            else{
		    // If a character can be written an odd number of times,
		    // its keyboard button works correctly.
                if(count % 2 != 0) res.insert(s[ptr]);
                count = 1;
            }
            ++ptr;
        }
        set<char>::iterator it = res.begin();
        for(it; it != res.end(); it++) cout << *it;
        cout<<endl;
    }
}