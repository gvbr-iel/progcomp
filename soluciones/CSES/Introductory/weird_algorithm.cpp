#include <bits/stdc++.h>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    if(!(cin>>n)) return 0;

    // Convierte el número en string para construir la solución esperada
    string s = to_string(n);

    // Mientras 'n' no sea 1 se realizan los calculos especificados, construyendo la solución string
    while (n!=1){
        
        // Evalúa si es par
        if (n%2 == 0) {
            n/=2;
        // En caso de ser impar
        } else {
            n = 3 * n + 1;
        }
        // Agregar al string solución
        s += " " + to_string(n);
    }

    cout << s << "\n";

    return 0;
}