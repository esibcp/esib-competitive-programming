class Solution {
public:
    // function that returns the reverse of an integer.
    int reverse(int x, int sum = 0){
        int tmp;
        if(x == 0) return sum;
        tmp = x%10;
        sum = sum*10 + tmp;
        return reverse(x / 10, sum);
    }
    // function that returns the number of digits within an integer.
    int countDigit(int n){
        int count = 0;
        while (n != 0){
            n = n / 10;
            ++count;
        }
        return count;
    }
    
    vector<long long> kthPalindrome(vector<int>& queries, int intLength) {
        vector<long long> res;
        int tmp;
        intLength%2 == 0 ? tmp = intLength/2 : tmp = intLength/2 + 1;
        int min = pow(10,tmp-1);// left minimum
        int max = pow(10,tmp-1)*9;// maximum query(no possible palindrome)
        int leftLen = countDigit(min);
        for(int i(0); i<queries.size(); ++i){
            if(queries[i]>max){res.push_back(-1);continue;}
            int left = (min + queries[i] - 1);
            int right;
            intLength%2 == 0 ? right = reverse(left) : right = reverse(left/10);
            long long ans = left * pow(10, intLength - leftLen) + right;
            res.push_back(ans);
        }
        return res;
    }
};
// Example
// ------
// intLength = 7 (7%2!=0)=>reverse (left/10)
// Palindromes in given order will be:
// 1000001, 1001001, 1002001, ..., 1010101, 11111, ..., 1100011, 1101011 ...
// (left + right)
// 1000 + 001 right = (reverse(left/10 = 100))
// 1001 + 001
// ...
// 1010 + 101 right = (reverse(101))
// 1011 + 101
// ...
// 1100 + 011 right = (reverse(110))
// 1101 + 011