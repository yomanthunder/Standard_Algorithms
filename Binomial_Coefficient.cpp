#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define pb push_back
#define pf push_front
#define mp make_pair
#define fi first
#define se second
// also learn about there time complexity and space complexity 

// recursive approach
int binomial_coefficient1(int n, int k) {

    // base case
    if(k == 0 || k == n) {
        return 1;
    }
    return binomial_coefficient(n-1,k-1)+binomial_coefficient(n-1,k);
}

// DP approach
// there is a dp approach for this , come back after learning the dp 
int main() {
    
}