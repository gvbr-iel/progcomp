#include <bits/stdc++.h>

// Evita usar std::cout
using namespace std;

int main(){
    // Optimización de I/O para programación competitiva
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    if (!(cin >> n)) return 0;

    for (long long k = 1; k <= n; k++){
        long long total = (k * k) * (k * k - 1)/2;
        long long ataques = 4 * (k - 1) * (k - 2);
        cout << total - ataques << "\n";
    }

    return 0;
}