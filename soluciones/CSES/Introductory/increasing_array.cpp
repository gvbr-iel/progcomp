#include <bits/stdc++.h>

// Evita usar std::cout
using namespace std;

int main(){

    // Optimización de I/O para programación competitiva
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    if(!(cin>>n)) return 0;

    // variables para almacenar movimientos y valor máximo
    long long movimientos = 0;
    long long max_v = 0;

    // Recibimos los valores de entrada en la variable 'actual'
    for (int i=0;i<n;i++){
        long long actual;
        cin>>actual;

        if (i==0){
            max_v = actual;
        } else {
            // En caso de que el valor actual sea menor al máximo número (ubicado a la izquierda)
            if (actual < max_v){
                movimientos += (max_v - actual);
            // En caso de que sea mayor o igual
            } else {
                max_v = actual;
            }
        }
    }

    cout << movimientos << "\n";


    return 0;
}