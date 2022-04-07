#include <vector>
#include <map>
#include <iterator>
#include <iostream>
using namespace std;

typedef map<char, int> M;
int romanToInt(string s) {
    M Letters =
    { {'I',1},
        {'V',5},
        {'X',10},
        {'L',50},
        {'C',100},
        {'D',500},
        {'M',1000} };


    int res = 0;

    for (size_t i = 0; i < s.length(); i++) {
        M::iterator itr1 = Letters.find(s[i]);
        M::iterator itr2 = Letters.find(s[i + 1]);

        int nb1 = itr1->second;
        int nb2 = itr2->second;
        if (nb1 >= nb2) {
            res = res + nb1;
        }
        else if (nb1 < nb2) {
            res = res + nb2 - nb1;
            i = i + 1;
        }
    }
    return res;
}
