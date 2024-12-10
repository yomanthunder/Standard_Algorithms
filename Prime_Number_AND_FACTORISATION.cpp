#include<bits/stdc++.h>
using namespace std;
//print prime till N 
//O(N) 
vector<int> primes;
void Prime1(int n){
    for(int i=2;i<n;i++){
        bool flag = true;
        for(int j=2;j<i;j++){
            if(i%j==0){
                flag = false;
                break;
            }
        }
        if(flag) cout<<i<<" ";
    }
}
//O(sqrt(N))
void Prime2(int n){
    for(int i=2;i<n;i++){
        bool flag = true;
        for(int j=2;j<=sqrt(i);j++){
            if(i%j==0){
                flag = false;
                break;
            }
        }
        if(flag) cout<<i<<" ";
    }
}
// Prime Sieve O(N(log(logN))
void PrimeSieve(){

}

int main(){
    int n; cin>>n;
    Prime1(n);cout<<endl;
    Prime2(n);
}