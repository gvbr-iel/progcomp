#include <bits/stdc++.h>

// Evita usar std::cout
using namespace std;

void solve(){
    long a, b;
    cin >> a >> b;

    // 1. La suma total de monedas debe ser divisible entre 3.
    // 2. Ninguna pila debe ser mayor que el doble de la otra.

    if ((a+b) % 3 == 0 && a <= 2*b && b <= 2*a){
        cout<<"YES\n";
    } else {
        cout << "NO\n";
    }
}

int main(){
    // Optimización de I/O para programación competitiva
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (cin>>t) {
        while (t--) {
            solve();
        }
    }

    return 0;
}