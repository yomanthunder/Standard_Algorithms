#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define pb push_back
#define pf push_front
#define mp make_pair
#define fi first
#define se second

ll powr(int a, int b ){
    int res =1;
    while(b>0){
        if(b&1){
        res*=a;
        }
        a*=a;
        b>>=1;
    }
    return res;
}

int main() {
    cout<<powr(2,5);
}