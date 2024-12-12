#include<bits/stdc++.h>
using namespace std;
//print prime till N 
//O(N) 
#define ll long long 
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
void PrimeSieve(vector<int> &sieve,int n){
    sieve[0]=0;sieve[1]=0;
    for(int p=2;p<=n;p++){
        if(sieve[p]){
            for(ll j = p*p;j<=n;j=j+p){
                sieve[j]=0;
            }
        }
    }
    for(int i=0;i<n;i++){
        if(sieve[i]){
            primes.push_back(sieve[i]);
            cout<<i<<" ";
        }
    }
     
}
// return the no. of prime between a to b both inclusive
int primeQuries(vector<int> &prefixPrime,int a,int b){
    return prefixPrime[b+1] - prefixPrime[a-1];
}
void primeFactorisation(){
// write code using prime sieve logic , the code is quite good
}
void segmented_seive(){
    
}
int main(){
    int n; cout<<"Enter no. n,"; cin>>n;
    int a; cout<<"Enter no. a,"; cin>>a;
    int b; cout<<"Enter no. b,"; cin>>b;
    vector<int> sieve(n,1);
    vector<int> prefixPrime(n+1,0);
    Prime1(n);
    cout<<"\n";
    Prime2(n);
    cout<<"\n";
    PrimeSieve(sieve,n);
    cout<<"\n";
    prefixPrime[0]=0;
    for(int i=1;i<n;i++){
       prefixPrime[i] = prefixPrime[i-1]+sieve[i-1];
       cout<<prefixPrime[i]<<" ";e
    }
    cout<<"\n";
    cout<<PrimeprimeQuriesquries(prefixPrime,a,b)<<"\n";
}