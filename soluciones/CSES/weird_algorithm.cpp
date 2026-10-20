#include <bits/stdc++.h>

using namespace std;

int main(){
    // Optimización de I/O para programación competitiva
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    if(!(cin>>n)) return 0;

    // Directamente imprimiendo en pantalla o construyendo el string adecuadamente
    string s = to_string(n);

    while (n!=1){
        
        if (n%2 == 0) {
            n/=2;
        } else {
            n = 3 * n + 1;
        }
        s += " " + to_string(n);
    }

    cout << s << "\n";

    return 0;
}