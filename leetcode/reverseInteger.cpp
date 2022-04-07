class Solution {
public:
    int loop(int x, long long acc){
        if(x==0){
            return acc;
        }
        acc = 10 * acc + x%10;
        if(acc>=INT32_MAX){
            return 0;
        }
        return loop(x/10,acc);
    }
    int reverse(int x) {
        if(x==INT32_MIN){
            return 0;
        }
        int rev= loop(abs(x),0);
        if(x<0){
            return -rev;
        }
        return rev;
    }
};