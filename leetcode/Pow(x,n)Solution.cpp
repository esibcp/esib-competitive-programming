class Solution {
public:
    //Binary exponentiation
    //Look for the algorithm implementation on the following link
    //https://cp-algorithms.com/algebra/binary-exp.html
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