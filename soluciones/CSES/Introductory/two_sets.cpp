#include <bits/stdc++.h>

// Evita usar std::cout
using namespace std;

int main(){
    // Optimización de I/O para programación competitiva
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    if(!(cin>>n)) return 0;

    long long total_sum = n * (n+1) / 2;

    // Si la suma total es impar, no se puede dividir en 2 partes iguales
    if (total_sum % 2 != 0){
        cout << "NO\n";
        return 0;
    }

    cout << "YES\n";
    
    vector<long long> set1, set2;
    long long target = total_sum/2;

    for (long long i = n; i>=1; i--){
        if (i <= target){
            set1.push_back(i);
            target -= i;
        } else {
            set2.push_back(i);
        }
    }

    // Imprimir Conjunto 1
    cout << set1.size() << "\n";
    for (int i=0; i<set1.size(); i++){
        cout << set1[i] << (i + 1 == set1.size() ? "" : " ");
    }

    cout << "\n";

    // Imprimir Conjunto 2
    cout << set2.size() << "\n";
    for (int i=0; i < set2.size(); i++) {
        cout << set2[i] << (i + 1 == set2.size() ? "" : " ");
    }

    cout << "\n";

    return 0;
}