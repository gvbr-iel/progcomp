#include <bits/stdc++.h>

// Evita usar std::cout
using namespace std;

long long power(long long base, long long exp, long long mod){

    long long res = 1;
    base = base % mod;

    while(exp>0){
        if(exp % 2 == 1) res = res * base;
        base = (base * base) % mod;
        exp/=2;
    }

    return res;
}

int main(){
    // Optimización de I/O para programación competitiva
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    if(!(cin>>n)) return 0;

    long long MOD = 10e9;
    cout<<power(2,n,MOD)<<"\n";

    return 0;
}