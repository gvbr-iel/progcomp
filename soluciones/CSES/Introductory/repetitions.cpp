#include <bits/stdc++.h>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string str;
    if (!(cin >> str)) return 0;

    // 'max_len' Guarda el máximo de carácteres iguales y 'current_len' guarda el número de carácteres iguales actual
    int max_len = 1, current_len = 1;

    for (size_t i = 1; i < str.length(); i++){
        if (str[i] == str[i-1]){
            current_len++;
        } else {
            // Si el carácter es distinto se evalúa si el número de carácteres iguales obtenido supera al máximo encontrado
            max_len = max(max_len, current_len);
            // Luego se reinicia
            current_len = 1;
        }
    }
    // Última comparación cuando se terminan los carácteres.
    max_len = max(max_len, current_len);

    cout << max_len << "\n";
    return 0;
}