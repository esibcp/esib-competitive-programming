//Author Elie Moutran

#include <bits/stdc++.h>
using namespace std;

struct candy{
    long type,height, weight, picked;
};

bool compare(candy a, candy b){
    // Compare function between candies based on weight, using this for sorting the candies vector
    return a.weight > b.weight;
}


long loop(vector<candy> candies, long x, long picked_type){
    bool flag = 0;
    long current_x = x;
    long target_type = picked_type;
    long cnt = 0;

    while (!flag){
        flag = 1;
        for(int i =0 ; i < candies.size(); ++i){
            if(!candies[i].picked && candies[i].type == target_type && candies[i].height <= current_x){
                cnt++;
                flag = 0;
                target_type = 1 - target_type; // if it was 0 will be 1 and vice versa
                current_x += candies[i].weight; //updating x
                candies[i].picked = 1; // flagging that this index has been used
                break;
            }
        }
    }
    return cnt; // returning number of candies that we managed to eat
}

int main()
{
    long n,x;
    cin >> n >> x;
    long ans = 0;
    vector<candy> candies(n);

    for (int i = 0; i < n; i++){
        cin >> candies[i].type;
        cin >> candies[i].height;
        cin >> candies[i].weight;
        candies[i].picked = 0;
    }
    sort(candies.begin(), candies.end(), compare); // sorting the candies vector based on weight with an ascending order

    long caramel_start = loop(candies, x, 0); // starting with caramel
    long fruit_start = loop(candies, x, 1); // starting with fruit 
    // check max between starting with caramel or starting with fruit and outputting it
    cout << max(caramel_start, fruit_start) << "\n";
    return 0;
}