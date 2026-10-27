#include <bits/stdc++.h>

// Evita usar std::cout
using namespace std;

int main(){
    // Optimización de I/O para programación competitiva
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    if(!(cin>>n)) return 0;

    long long count = 0;
    while(n > 0){
        count += n/5;
        n/=5;
    }

    cout<<count<<"\n";

    return 0;
}