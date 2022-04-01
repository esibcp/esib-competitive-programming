# include<bits/stdc++.h>
using namespace std;
int numOfWays(int n) {
    long twoColors = 6;
    long threeColors = 6;
    for (int i = 1; i < n; ++i) {
        long y = twoColors;
        twoColors = (3 * twoColors + 2 * threeColors) % int(pow(10, 9) + 7);
        threeColors = (2 * y + 2 * threeColors) % int(pow(10, 9) + 7);
    }
    return (twoColors + threeColors) % int(pow(10, 9) + 7);
}