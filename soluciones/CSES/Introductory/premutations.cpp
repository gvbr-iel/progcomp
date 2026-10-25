#include <bits/stdc++.h>

// Evita usar std::cout
using namespace std;

int main(){
    // Optimización de I/O para programación competitiva
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if(!(cin>>n)) return 0;

    // Casos particulares
    if (n == 1){
        cout<< "1\n";
        return 0;
    }
    if (n == 2 || n == 3){
        cout << "NO SOLUTION\n";
        return 0;
    }

    // Imprimir primero todos los pares
    for (int i = 2; i <= n; i += 2){
        cout << i << " ";
    }

    // Imprimir luego todos los impares
    for (int i = 1; i <= n; i += 2){
        cout << i << (i + 2 <= n ? " " : "");
    }
    cout << "\n";

    return 0;
}