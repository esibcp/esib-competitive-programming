class Solution {
public:
    
    double binaryPower(double x, int n){
        if(n==0){
            return 1;
        }
        if (n%2==0){
            double res = binaryPower(x,n/2);
            return res * res;
        }
        else{
            double res = binaryPower(x,n/2);
            return res * res * x;
        }
    }
    double myPow(double x, int n) {
        if (n<0){
            return 1.0/binaryPower(x,n);
        }
        return binaryPower(x,n);
    }
};