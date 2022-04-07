#include <bits/stdc++.h>
using namespace std;

int fib(int n) {
    if ((n == 0) || (n == 1)) {
        return n;
    }
    else {
        return fib(n-1) + fib(n-2);
    }
}

long long int fib_dp(long long int n) {
    vector<int> memo(n , -1);
    memo[0] = 1;
    memo[1] = 1;
    if (n <= 1) {
        return n;
    }
    for (int i = 2; i < n; ++i) {
        memo[i] = memo[i-1] + memo[i-2];
    }
    return memo[n-1];
}

int main() {
    // cout << fib(100); // slow
    int n = 10;
    cout << fib_dp(n);
    return 0;
}