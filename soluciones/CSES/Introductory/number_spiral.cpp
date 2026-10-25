#include <bits/stdc++.h>

// Evita usar std::cout
using namespace std;

// Función solución
void solve(){
    // Recibe y = filas, x = columnas
    long long y, x;
    cin >> y >> x;

    long long k = max(y,x);

    if(k%2==0){ // Capa PAR
        if (y <= x){
            cout << (k - 1) * (k - 1) + y << "\n";
        } else {
            cout << k * k - x + 1 << "\n";
        }
    } else { // Capa IMPAR
        if (y >= x) {
            cout << (k - 1) * (k - 1) + x << "\n";
        } else {
            cout << k * k - y + 1 << "\n";
        }
    }
}

int main(){
    // Optimización de I/O para programación competitiva
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if(cin>>t){
        // 't' guarda la cantidad de pruebas y se disminuye uno a uno mientras se resuelven con la función solve()
        while (t--){
            solve();
        }
    }

    return 0;
}