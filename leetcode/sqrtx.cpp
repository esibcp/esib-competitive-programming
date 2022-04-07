using namespace std;
class Solution {
public:
    
    //using newtons method:
    int mySqrt(int n) {
    if (n==0) return 0;
    double x = n;
    double sq;
    int count = 0;
    while (1) {
        count++;
        sq = 0.5 * (x + (n / x));
        if (abs(sq - x) < 0.5)
            break;
        x = sq;
    }
 
    return (int)sq;
    }
};