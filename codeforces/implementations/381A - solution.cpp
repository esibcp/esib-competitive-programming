// Emmanuel Abdelnour
// Two pointers approach, O(n) complexity.
// Accepted on Codeforces

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> cards(n);
    for(int i = 0; i < n; i++) cin >> cards[i];
    int start(0), end(n - 1);
    int sereja_index, dima_index;
    int sereja_score(0), dima_score(0);
    int i(2);
    while(start <= end){
        if(i%2 == 0){ /*sereja's turn*/
            if(cards[start] > cards[end]){
                // Sereja will remove the first card since
                // her strategy is to remove the larger one.
                sereja_index = start;
                // So we move the start pointer to the next card.
                ++start;
                // The card she removed will be added to her score.
                sereja_score += cards[sereja_index];
            }
            else{
                // Sereja will remove the last card since
                // her strategy is to remove the larger one.
                sereja_index = end;
                // So we move the end pointer to the previous card.
                --end;
                // The card she removed will be added to her score.
                sereja_score += cards[sereja_index];
            }
        }
        else{ /*dima's turn*/
            // Same approach as Sereja's.
            if(cards[start] > cards[end]){
                dima_index = start;
                ++start;
                dima_score += cards[dima_index];
            }
            else{
                dima_index = end;
                --end;
                dima_score += cards[dima_index];
            }
        }
        ++i;
    }
    cout<<sereja_score<<" "<<dima_score;
    return 0;
}