#include <bits/stdc++.h>
using namespace std;

/*
Problem: 1646B : https://codeforces.com/problemset/problem/1646/B
B. Quality vs Quantity
Solution accepted by Codeforces
Author: Charbel Farah
*/

int main() {
    int cases = 0;
    cin >> cases;
    for (int j = 0; j < cases; ++j) {
        int size = 0;

        cin >> size;
        vector<int> nums(size);
        for (int i = 0; i < nums.size(); i++) {
            cin >> nums[i];
        }

        sort(nums.begin(), nums.end());
        /* sort the array and give the (nums.size() - 1) / 2 included to the blue part and the rest to the red to guarantee that count(blue) > count(red) */

        int blue_ptr = 0;
        int red_ptr = nums.size() - 1;
        int ptrs_limit = (nums.size() - 1) / 2;
        int count_red = 1;
        int count_blue = 1;
        long long int sum_red = nums[red_ptr];
        long long int sum_blue = nums[blue_ptr];
        bool flag = false;

        // Used the two pointer approach because i want to 

        while (!flag) {
            if ((sum_red <= sum_blue) && (red_ptr - 1 >= ptrs_limit + 1)) {
                ++count_red;
                --red_ptr;
                sum_red += nums[red_ptr];
            }
            if ((count_red >= count_blue) && (blue_ptr + 1 <= ptrs_limit)) {
                ++count_blue;
                ++blue_ptr;
                sum_blue += nums[blue_ptr];
            }

            flag = ((sum_red > sum_blue) && (count_red < count_blue));

            if ((red_ptr == ptrs_limit + 1) && (blue_ptr == ptrs_limit)) {
                break;
            }
        }
        if (flag) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
