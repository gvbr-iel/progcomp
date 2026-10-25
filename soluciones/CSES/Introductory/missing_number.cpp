#include <bits/stdc++.h>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    // Condicional que retorna 0 cuando no hay un valor a leer como entrada
    if (!(cin>>n)) return 0;

    // Se realiza la suma con todos los numeros (1+2+3+4+5+...etc)
    long long a = n*(n+1)/2, b=0, aux; // la variable 'b' almacena la suma parcial y 'aux' el valor actual del número recibido.

    // Suma parcial con los valores entregados como entrada
    for (int i=0;i<n-1;i++){
        cin>>aux;
        b+=aux;
    }

    // Restar suma entera con suma parcial para conocer el numero faltante
    cout<<(a-b)<<"\n";

    return 0;
}